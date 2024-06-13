package ch7;
import java.util.Scanner;
public class star2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<2*n-1;col++)
            {
                if(row+col>=2*n-1 || row-col>0)
                {
                    System.out.printf("-");
                }
                else
                {
                    System.out.printf("*");
                }
            }
            System.err.println();
        }
        input.close();
    }
}
