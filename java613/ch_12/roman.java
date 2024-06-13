
import java.util.Scanner;
public class roman
{
    static int decTrans(char romanText)
    {
        switch (romanText) {
            case 'I':
                return 1;
                
            case 'V':
                return 5;
                
            case 'X':
                return 10;
                
            case 'L':
                return 50;
                
            case 'C':
                return 100;
                
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
                
        }
    }
    public static void main(String[] args) {
        String roman;
        Scanner input = new Scanner(System.in);
        roman= input.nextLine();
        input.close();
        int decValue=0;
        int prevValue=0,nowValue;
        for(int readIndex=0;readIndex<roman.length();readIndex++)
        {
            System.out.println(decTrans(roman.charAt(readIndex)));
            nowValue=decTrans(roman.charAt(readIndex));
            if(prevValue>=nowValue && readIndex!=0)
            {
                decValue+=nowValue;
                prevValue=nowValue;
            }
            else
            {
                decValue+=nowValue-prevValue-prevValue;
                prevValue=nowValue;
            }
        }
        System.out.println(decValue);
    }
}
