//迴文判斷
import java.util.Scanner;
public class p
{
    public static void main(String[] args) {
        String testString;
        Scanner  input = new Scanner(System.in);
        testString = input.nextLine();
        int len=testString.length();
        boolean isPalindrome=true;
        input.close();
        System.out.println(len);
        for(int i=0;i<(len/2)+1;i++)
        {
            System.err.printf("%c==%c\n",testString.charAt(len-i-1),testString.charAt(i));
            if(testString.charAt(len-i-1)!=testString.charAt(i))
            {
                isPalindrome=false;
                break;
            }
        }
        if (isPalindrome)
        {
            System.out.println("true");
        }
        else
        {
            System.out.println("false");
        }
    } 

}
