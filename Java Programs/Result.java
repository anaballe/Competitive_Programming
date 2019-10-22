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
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'usernamesSystem' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY u as parameter.
 */

vector<string> usernamesSystem(vector<string> u) {
    map<string, int> mp;
    vector<string> res;
    for(string &s : u){
        if(mp[s]){
            string rs(s.begin(), s.end());
            rs += to_string(mp[s]);
            res.push_back(rs);
            mp[s]++;
        }else{
            res.push_back(s);
            mp[s]++;
        }
    }

    return res;
}

int main()


/*
Enter your query here.
*/
select NAME from HACKER WHERE HACKER.MONTHS < 10 AND HACKER.MONTHS*(HACKER.HACKOS) > 100 ORDER BY ID;


import java.io.*;
import java.util.*;
import java.util.regex.*;


public class Solution {
    private static final Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]) throws Exception {
        // read the string filename
        String filename;
        filename = scan.nextLine();
        String fll = "bytes_"+filename;
        File file = new File(filename);
        BufferedReader br = new BufferedReader(new FileReader(file));
        String t="";
        long cts=0,su=0;
        PrintWriter fw = new PrintWriter(fll, "UTF-8");
        while((t=br.readLine()) != null){
            String pt = t.substring(t.length()-20,t.length());
            String [] k = t.split(" ");
            int l = k.length;
            try{
            long d = Long.parseLong(k[l-2]);
            
            long f = Long.parseLong(k[l-1]);
            
            
            if(f > 5000){
                ++ cts;
                su += f;
            }
            }
            catch(Exception e){
                continue;
            }
        //     String a = Integer.toString(cts);
        // String b = Integer.toString(su);
        // fw.println(cts);
        // fw.println(su);
        // fw.println(k[l-2]);
        

        }
        //fw.close();

        //System.out.println(cts+" "+su);
    //     PrintWriter fw = new PrintWriter("bytes_hosts_access_log_00.txt", "UTF-8");
    //   //  FileWriter fw =new FileWritPer("bytes_hosts_access_log_00.txt");  
    //     String a = Integer.toString(cts);
    //     String b = Integer.toString(su);
        fw.println(cts);
        fw.println(su);
         fw.close();
    }
}

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'prison' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 *  3. INTEGER_ARRAY h
 *  4. INTEGER_ARRAY v
 */

long prison(int n, int m, vector<int> h, vector<int> v) {
    vector<long long> arr(n+2, 1);
    vector<long long> brr(m+2, 1);
    for(long long a : h)
        arr[a] = 0;
    for(long long b : v)
        brr[b] = 0;
    long long ma = 0, my = 0;
    for(long long i = 0; i < n+2; i++){
        if(arr[i] == 1){
            long long en = i+1;
            while(en < n+2 && arr[en] == 0)
                en++;
            ma = max(ma, en-i);
            i = en-1;
        }
    }
    for(long long i = 0; i < m+2; i++){
        if(brr[i] == 1){
            long long en = i+1;
            while(en < m+2 && brr[en] == 0)
                en++;
            my = max(my, en-i);
            i = en-1;
        }
    }

    return ma*my;
}

int main()