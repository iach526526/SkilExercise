package leetcode;

import java.util.Scanner;

public class bobsort {
    public static  void sort(int arr[])
    {
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr.length-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    public static int[] obtain_int(String str) {
        String[] str_arr = str.split(",");
        int[] int_arr = new int[str_arr.length];
        for(int i=0;i<str_arr.length;i++) {
            int_arr[i] = Integer.parseInt(str_arr[i]);
        }
        return int_arr;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String arr = input.nextLine();
        int[] lst = obtain_int(arr);
        sort(lst);
        for(int i=0;i<lst.length;i++)
        {
            if(i==0)
            System.out.printf("%d",lst[i]);
            else
            System.out.printf(",%d",lst[i]);

        }
        input.close();
    }
}
