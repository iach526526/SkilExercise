package ch5;

import java.util.Scanner;

public class caculator {
    public static void main(String[] args) {
        // 輸入運算式，用空格隔開如"5 + 2""
        Scanner input = new Scanner(System.in);
        int op1 = input.nextInt();
        char opter = input.next().charAt(0);
        int op2 = input.nextInt();

        double ans = 0;
        switch (opter) {
            case '+':
                ans = op1 + op2;
                break;
            case '-':
                ans = op1 - op2;
                break;
            case '*':
                ans = op1 * op2;
                break;
            case '/':
                ans=op2==0?0:(double)op1 / op2;
                break;
            default:
                ans = 0;
        }
        System.out.println(ans);
        input.close();
    }
}
