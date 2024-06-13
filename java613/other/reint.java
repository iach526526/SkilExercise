//給數字傳入 function，翻轉。
//-123->-321
import java.util.Scanner;

public class reint {
    static String reverse(String s){
        String res = "";
        int negFlag=0;
        if(s.charAt(0)=='-'){
            res = "-" + res;
            negFlag = 1;
        }
        for(int i=s.length()-1;i>=0;i--){
            res += s.charAt(i);
            if(negFlag==1 && i==1){
                break;
            }
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        System.out.println(reverse(s));
        input.close();
    }
}