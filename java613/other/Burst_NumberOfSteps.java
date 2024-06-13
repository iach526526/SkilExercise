import java.util.Scanner;


// Java program to demonstrate working
// of java.lang.Math.pow() method
import java.lang.Math;
public class Burst_NumberOfSteps {
    static int toDec(String s)
    {
        int sum=0,squ=1;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s.charAt(i)=='1')
            {
                sum+=1*squ;
            }
            squ*=2;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner inp=new Scanner(System.in);
        String Numb = inp.nextLine(); //binary number
        int decNum=toDec(Numb);
        int loopCount=0;
        while(decNum!=1)
        {
            loopCount++;
            if(decNum%2==0)
            decNum/=2;
            else
            decNum+=1;
        }
        System.out.println(loopCount);
        inp.close();
    }
}
