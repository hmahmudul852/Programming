import java.math.BigDecimal;
import java.util.*;

public class PostFixCalculator {
    private List<String> expression = new ArrayList<String>();
    private Deque<Double> stack = new ArrayDeque<Double>();

    public PostFixCalculator(List<String> postfix) {
        expression = postfix;
    }

    public String result() {
        String re;
        try {
            for (int i = 0; i != expression.size(); ++i) {
                if (Character.isDigit(expression.get(i).charAt(0))) {
                    stack.addLast(Double.parseDouble(expression.get(i)));
                } else {
                    double tempResult = 0;
                    double temp;
                    switch (expression.get(i)) {
                        case "+":
                            temp = stack.removeLast();
                            tempResult = stack.removeLast() + temp;
                            break;

                        case "-":
                            temp = stack.removeLast();
                            tempResult = stack.removeLast() - temp;
                            break;

                        case "*":
                            temp = stack.removeLast();
                            tempResult = stack.removeLast() * temp;
                            break;

                        case "/":
                            temp = stack.removeLast();
                            tempResult = stack.removeLast() / temp;
                            break;
                        case "^":
                            temp = stack.removeLast();
                            tempResult = Math.pow(stack.removeLast(), temp);
                            break;
                    }
                    stack.addLast(tempResult);
                }
            }
            BigDecimal res = new BigDecimal(stack.removeLast()).setScale(3, BigDecimal.ROUND_HALF_UP);
            re = res.toString();
        } catch (Exception e) {
            re = "Infininy";
        }
        return re;
    }
}

