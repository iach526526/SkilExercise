package ch7;

public class ch7_5 {
    public static void main (String[] args)
    {
        int[] score ={9,14,6,18,2,10};
        min(score);
    }
    public static void min(int[] arr)
    {
        int mm=arr[0];
        for(int i=0;i<arr.length;i++)
        {
            if(mm>arr[i])
            {
                mm=arr[i];
            }
        }
        System.err.println("minimum num= "+mm);
    }
}
