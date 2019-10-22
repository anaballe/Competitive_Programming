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
            String line = br.readLine();
            int l = line.length();
            int i; 
            String fin = "";
            char c='a';
            for( i =0;i<l;++i){
                c = line.charAt(i);
                if(c ==' ' && i != (l-1)){
                    if(line.charAt(i+1) != ' '){
                        fin = fin + c;
                    }
                }
                if(c != ' '){
                    fin = fin + c;
                }
            }
            System.out.print(fin);
        } catch (IOException ioe) {
            ioe.printStackTrace();
        }
    }
}