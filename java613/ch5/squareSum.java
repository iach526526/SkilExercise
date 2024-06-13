package ch5;

import java.util.Scanner;

public class squareSum {
    public static void main(String[] arStrings) {
        Scanner input = new Scanner(System.in);
        // 輸入n，算出1~n的平方和
        int n = input.nextInt();
        int sum=0;
        for(int num=1;num<=n;num++)
        {
            sum+=num*num;
        }
        System.out.println(sum);
        input.close();
    }
}
