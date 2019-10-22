import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class hack {

    public static boolean containsHackerRank(String s) {
        boolean contains = false;
        char[] hackerrank = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
        int index = 0;
        
        for (int i = 0; i < hackerrank.length; i++) {
            
            contains = false;
            
            
            while (index < s.length()) {
                
                if (hackerrank[i] == s.charAt(index)) {
                    contains = true;
                    index++;
                    break;
                }
                
                else {
                    index++;
                }
            }
        
            if (!contains) {
                return false;
            }
        }
        
        
        return contains;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            String s = in.next();
            System.out.println((containsHackerRank(s)) ? "YES" : "NO");
        }
        in.close();
    }
}
