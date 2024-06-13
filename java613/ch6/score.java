import java.util.Scanner;

public class score {
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int scoreCount=input.nextInt();
        int scores[];
        scores=new int[scoreCount];
        int sum=0;//總和
        for(int i=0;i<scoreCount;i++)
        {
            scores[i]=input.nextInt();
            sum+=scores[i];
        }
        input.close();
        System.out.printf("sum:%d avg:%.2f",sum,(float)sum/scoreCount);
    }
    
}
