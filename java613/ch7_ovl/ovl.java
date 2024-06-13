package ch7_ovl;

import java.util.Scanner;

public class ovl {
    public static int[] obtain_int(String str) {
        String[] str_arr = str.split(",");
        int[] int_arr = new int[str_arr.length];
        for(int i=0;i<str_arr.length;i++) {
            int_arr[i] = Integer.parseInt(str_arr[i]);
        }
        return int_arr;
    }
    public static int add(int arr[])
    {
        int res=0;
        for(int a:arr)
        {
            res+=a;
        }
        return res;
    }
    public static int add(int a,int b)
    {
        return a+b;
    }
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        String str = input.nextLine();
        int[] int_arr = obtain_int(str);
        System.out.println(add(int_arr));
        input.close();
    }
}
