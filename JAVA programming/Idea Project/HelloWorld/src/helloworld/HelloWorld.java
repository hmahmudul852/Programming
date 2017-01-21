package helloworld;

import java.util.Scanner;

/**
 * Created by hasan on 11/17/16.
 */
public class HelloWorld {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter ur input");
        int a=scanner.nextInt();
        System.out.println("HelloWorld"+a);
    }
}
