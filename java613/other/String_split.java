import java.util.Scanner;
public class String_split {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String str = scn.nextLine();
        scn.close();
        int[] int_arr = obtain_int(str);
        for(int item:int_arr){
            System.out.println(item);
        }
    }
    //convert string to int array
    public static int[] obtain_int(String str) {
        String[] str_arr = str.split(",");
        int[] int_arr = new int[str_arr.length];
        for(int i=0;i<str_arr.length;i++) {
            int_arr[i] = Integer.parseInt(str_arr[i]);
        }
        return int_arr;
    }
}
