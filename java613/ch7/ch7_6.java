package ch7;

public class ch7_6 {
    public static void main (String[] args)
    {
        int[][] mat=
        {
            {18,32,65,27,30},
            {17,56,12,66}
        };
        trans(mat);
    }
    public static void trans(int[][] arr)
    {
        for(int row=0;row<arr.length;row++)
        {
            for(int colT=arr[row].length;colT>0;colT--)
            {
                System.out.printf("%d ",arr[row][colT-1]);
            }
            System.out.print("\n");
        }
    }
}
