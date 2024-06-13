package ch5;

import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        // 判斷質數
        Scanner intput = new Scanner(System.in);
        int num = intput.nextInt();
        //給定flag初值，除了2，是偶數就不是質數，直接跳過判斷。否則預設為是質數 
        boolean primeFlag =num!=2 && num % 2 ==0?false:true;
        if (num != 2 && num % 2 == 1) {
            for (int i = 3; i < num; i++) {
                if (num%i==0)
                {
                    //not a prime
                    primeFlag=false;
                    break; 
                }
            }
        }
        if( primeFlag){
            System.out.println("Prime numbe");
        }
        else
        {
            System.out.println("Compositenumbe");
        }
        intput.close();
    }
}
