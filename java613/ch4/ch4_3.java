package ch4;

import java.util.Scanner;

public class ch4_3 {
    public static void main(String[] args) {
        // 輸入低於50的價錢，找零錢錢給你
        Scanner input = new Scanner(System.in);
        System.out.print("小明花多少錢:(最多輸入50):");
        int price = input.nextInt(), back;// 讀入買多少錢
        //確保price 在0~50這個範圍
        price=price%51;
        //back:總共找回多少錢
        back = 50 - price;
        System.out.println(back);
        System.out.printf("需要找的零錢: %d個 10元+%d 個 5 元+%d 個1 元",
                                         back / 10, back % 10 / 5, back % 10 % 5);
        input.close();
        
    }
}
