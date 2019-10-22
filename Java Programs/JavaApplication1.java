
import java.io.*;
/**
 *
 * @author root
 */
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)throws IOException{
        // TODO code application logic here
        InputStreamReader imp=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(imp);
        System.out.println("enter the values of a and b");
        int a=Integer.parseInt(br.readLine());
        int b=Integer.parseInt(br.readLine());
        int sum=0;
        sum=a+b;
        System.out.println("the sum is "+sum);
    }
    
}
