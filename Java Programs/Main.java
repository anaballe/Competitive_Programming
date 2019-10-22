/**
 *
 * NOTE : Class Name should be Main 
 *
 **/
import java.io.*;
import java.util.*;
class Main {
    public static void main(String[] args) throws InterruptedException {
        List<String> inputByLine = new ArrayList<String>();
        try {
            // Get the object of DataInputStream
            InputStreamReader isr = new InputStreamReader(System.in,"UTF-8");
            BufferedReader br = new BufferedReader(isr);
            int n,i,min =0,p=0;
           String line = br.readLine();
            n = Integer.parseInt(line);
           String line2 = br.readLine();
           String [] k = line2.split("[ ]");
           int [] counts = new int[11];
           for( i = 0;i< 11;++i)
            counts[i]=0;
           counts[0]= 1000;
           int [] arr = new int[n];
           for( i =0;i<n;++i){
               arr[i] = Integer.parseInt(k[i]);
               ++ counts[arr[i]];
           }
           min = counts[0];
           for(i = 1;i<11;++i){
               if(min > counts[i] && counts[i] !=0){
                   min = counts[i];
                   p = i;
               }
          // System.out.println("frequency of "+ i +" is " + counts[i]);
           }
           System.out.println(p);
            
            isr.close();
        } catch (IOException ioe) {
            ioe.printStackTrace();
        }
    }
}
