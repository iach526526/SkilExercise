package leetcode;

import java.util.Scanner;

public abstract class TwoSum {
    public static int[] obtain_int(String str) {
        String[] str_arr = str.split(",");
        int[] int_arr = new int[str_arr.length];
        for(int i=0;i<str_arr.length;i++) {
            int_arr[i] = Integer.parseInt(str_arr[i]);
        }
        return int_arr;
    }
    public static int find(int arr[],int target,int now)
    {
        int index=0;
        for(int each:arr)
        {
            if(each==target && index!=now)
            {
                return index;
            }
            index++;
        }
        return -1;
    }
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        String arr = input.nextLine();
        int[] lst = obtain_int(arr);
        int target = input.nextInt();
        
        for (int index=0;index<lst.length;index++)
        {
            int each=lst[index];
            int match=target-each;
            int resu=find(lst, match,index);
            if(resu==-1)
            {//沒找到
                continue;
            }
            else
            {
                System.out.printf("%d %d",resu,index);
                break;
            }
        }
        input.close();
    }
}
