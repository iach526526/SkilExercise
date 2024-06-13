package ch3;

import java.util.Scanner;

public class ch3_3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("What is your first and last names: ");//輸入  Tony Tsai
        String name = input.nextLine();
        System.out.print("How old are you? ");
        int age =input.nextInt();
        System.out.printf("%c.%c. is %d years old.",name.charAt(0),name.charAt(5),age);
        input.close();

    }
}
