public class max {
    public static void main (String [] args)    
    {
        int [] arr={17,48,30,74,62};
        int max=arr[0];
        int maxIndex=0;
        for(int index=0;index<arr.length;index++)
        {
            if(arr[index]>max)
            {
                max=arr[index];
                maxIndex=index;
            }
        }
        System.out.printf("arr[%d] %d is the largest",maxIndex,max);
    }
}
