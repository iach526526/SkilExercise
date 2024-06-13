package ch7_ovl;

import java.util.Scanner;

public class gcd {
    public static int Rgcd(int a,int b)//遞迴輾轉相除找 GCD
    {
        if(b==0)
        {
            return a;
        }
        else
        {
            return Rgcd(b,a%b);
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        System.out.println(Rgcd(a,b));
        input.close();
    }
}
