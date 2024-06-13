package ch9;
import java.util.Random;
class IntArray
{
    private int[] array;
    IntArray(int[] arr)
    {
        //把 arr 值放進去 array
        array = new int[arr.length];
        for(int i=0;i<arr.length;i++)
        {
            array[i] = arr[i];
        }
    }
    IntArray(int n)
    {
        array = new int[n];
        for(int i=0;i<n;i++)
        {
            array[i] = new Random().nextInt(100);
        }
    }
    void show()
    {
        for(int i=0;i<array.length;i++)
        {
            System.out.printf("%d ",array[i]);
        }
        System.out.println();
    }
    void sort(String flag)
    {
        if (flag=="descending")
        {
            deSort(this.array);
        }
        else
        {
            inSort(this.array);
        }
    }
    private void deSort(int arr[])
    {
        //大到小
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr.length-i-1;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    arr[j]^=arr[j+1];
                    arr[j+1]^=arr[j];
                    arr[j]^=arr[j+1];
                }
            }
        }
    }
    private void inSort(int arr[])
    {
        //小到大排列
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr.length-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    arr[j]^=arr[j+1];
                    arr[j+1]^=arr[j];
                    arr[j]^=arr[j+1];
                }
            }
        }
    }
    public static int find_max(IntArray a)
    {
        int max = a.array[0];
        for(int i=1;i<a.array.length;i++)
        {
            if(a.array[i]>max)
            {
                max = a.array[i];
            }
        }
        return max;
    }
    public static int find_min(IntArray a)
    {
        int min=a.array[0];
        for(int i=0;i<a.array.length;i++)
        {
            if(min>a.array[i])
            {
                min=a.array[i];
            }
        }
        return min;
    }
}
public class number {
    public static void main(String[] args) {
        IntArray a1 = new IntArray(6);
        a1.sort("descending");
        a1.show();
        int min_a1 = IntArray.find_min(a1);
        System.out.printf("The minimum number of a1 is %2d\n", min_a1);
        int[] arr = { 3, 19, 4, 47, 10, 2 };
        IntArray a2 = new IntArray(arr);
        a2.sort("ascending");
        a2.show();
        int max_a2 = IntArray.find_max(a2);
        System.out.printf("The maximum number of a2 is %2d\n", max_a2);
    }
}
