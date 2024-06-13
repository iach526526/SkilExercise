import java.util.Scanner;

public class random {
    public static void main(String[] args)
    {
        int len;
        Scanner input=new Scanner(System.in);
        len=input.nextInt();
        int arr[];
        arr=new int [len];
        for(int i=0;i<len;i++)
        {
            arr[i]=(5*i+845)%9;
            System.out.printf("%d,",arr[i]);
            
        }
        input.close();
    }
}
