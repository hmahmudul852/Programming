#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{
 #include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{

    int firstNumber;
    int secondNumber;
    int thirdNumber;

    scanf ("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber > secondNumber && firstNumber > thirdNumber) {
        printf ("%d\n", firstNumber);

    } else if (secondNumber > firstNumber && secondNumber > thirdNumber) {
        printf ("%d\n", secondNumber);

    } else {
        printf ("%d\n", thirdNumber);
    }

    return 0;
}
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    scanf ("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber < secondNumber && firstNumber < thirdNumber) {
        printf ("%d\n", firstNumber);

    } else if (secondNumber < firstNumber && secondNumber < thirdNumber) {
        printf ("%d\n", secondNumber);

    } else {
        printf ("%d\n", thirdNumber);
    }

    return 0;
}

