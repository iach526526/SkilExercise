import java.util.Scanner;

/**
 * NumberOfSteps
 */
public class NumberOfSteps {
    static int reduce(String Numb){
        StringBuffer doit = new StringBuffer(Numb);
        int carry=0;
        int cnt=1;
        while (doit.length()!=1) {
            int lsb=doit.length()-1;
            if(doit.charAt(lsb)=='0' && carry==0)
            {
                carry=0;
                cnt++;
            }
            else if(doit.charAt(lsb)=='0' && carry==1 ||doit.charAt(lsb)=='1' && carry==0)
            {
                carry=1;//奇數要再 +1
                cnt+=2;
            }
            else if(doit.charAt(lsb)=='1' && carry==1)
            {
                carry=1;
                cnt++;
            }
            doit.deleteCharAt(lsb);
        }

        return cnt;
    }
    public static void main(String[] args) {
        Scanner inp=new Scanner(System.in);


        String Numb = inp.nextLine(); //binary number
        System.out.println(reduce(Numb));
        inp.close();
    }

}