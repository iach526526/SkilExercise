package ch7_ovl;

import java.util.Scanner;

public class fib {
    public static int Rfib(int n)
    {
        if(n==0)
        {return 0;}
        else if(n==1)
        {return 1;}
        else
        {
            return Rfib(n-1)+Rfib(n-2);
        }
    }
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);

        int n = input.nextInt();
        System.out.println(Rfib(n));
        input.close();
    }
}
