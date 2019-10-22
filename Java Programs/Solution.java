import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;


class Result {

    /*
     * Complete the 'usernamesSystem' function below.
     *
     * The function is expected to return a STRING_ARRAY.
     * The function accepts STRING_ARRAY u as parameter.
     */

    public static List<String> usernamesSystem(List<String> u) {
    // Write your code here
    List<String> ar = new ArrayList<String>();
     
    String p ="";
    
    for(int i=0;i<ar.size();++i){
        int b =0;
        p="";
        String t = u.get(i);
        for(int j = 0;j<i;++j){
            
            
            String tt = u.get(j);
            
            if(t.equalsIgnoreCase(tt)){
                ++b;
            }
        }
        if(b>0){
             p = t + Integer.toString(b);
        }
        else{
            p=t;
        }
    ar.add(p);
    }
     for(int z=0;z<ar.size();++z){
        System.out.println(ar.get(z));
    }
    return ar;
   
    }
    

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int uCount = Integer.parseInt(bufferedReader.readLine().trim());

        List<String> u = IntStream.range(0, uCount).mapToObj(i -> {
            try {
                return bufferedReader.readLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        })
            .collect(toList());

        List<String> result = Result.usernamesSystem(u);

        bufferedWriter.write(
            result.stream()
                .collect(joining("\n"))
            + "\n"
        );

        bufferedReader.close();
        bufferedWriter.close();
    }
}
