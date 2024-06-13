package ch3;

import java.util.Scanner;

public class ch3_2 {

    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        //輸入被乘數
        System.out.print("The first number:");
        int first = inp.nextInt();
        //輸入乘數
        System.out.print("The second number:");
        int second = inp.nextInt();
        //輸出
        System.out.printf("Result:%dx%d = %d",first,second,first*second);
//關閉鍵盤監聽
        inp.close();
    }
}