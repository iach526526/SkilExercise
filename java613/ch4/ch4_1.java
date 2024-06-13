package ch4;

import java.util.Scanner;

public class ch4_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("請輸入攝氏溫度:");
        double temp = input.nextDouble();
        //輸出溫度
        System.out.printf("華式溫度:"+((temp*9/5)+32));
        input.close();
    }
}
