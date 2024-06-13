package ch7;
import java.util.Scanner;
public class star {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        gen_star(n);
        input.close();
    }
    public static void gen_star(int layer)
    {
        for(int i=layer;i>0;i--)
        {
            //space
            for(int sp=layer-i;sp>0;sp--)
            {
                System.out.printf("-");
            }
            //star
            for(int s=0;s<2*i-1;s++)
            {
                System.out.printf("*");
            }
            System.err.println();
        }
    }
}
