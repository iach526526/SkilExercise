public class salse {
    public static void main (String [] args)   
    {
        int salseTable[][]={
                            {32,35,26,30},
                            {34,30,33,31}};
        float summary[][];
        summary=new float[salseTable.length][2];
        /*
            total avg
            ____  ____
         * |    ||    |     salse 1
         * |    ||    |     salse 2
         * 
         */
        for(int man=0;man<salseTable.length;man++)
        {
            int total=0;
            for(int each:salseTable[man])
            {
                total+=each;
            }
            summary[man][0]=total;
            summary[man][1]=(float)total/salseTable[man].length;
                
            
        }
        System.out.println("total   avg");
        for(int row=0;row<summary.length;row++)
        {
            for(int cloumn=0;cloumn<summary[row].length;cloumn++)
            {
                System.out.printf("%.2f ",summary[row][cloumn]);
            }
            System.out.println();
        }

    }
}
