import java.io.*;
public class dictionaryGenerator {

    public static void main(String[] args)throws IOException{

        // Create an alphabet to work with
        char[] alphabet = new char[] {'a','b','c','d','q','w','e','r','t','y','u','i','o','p','s','f','g','h','j','k','l','z','x','v','n','m','1','2','3','4','5','6','7','8','9','0'};
        // Find all possible combinations of this alphabet in the string size of 3
        StringExcersise.possibleStrings(5, alphabet,"");
    }

} class StringExcersise {

    public static void possibleStrings(int maxLength, char[] alphabet, String curr) {

        // If the current string has reached it's maximum length
        if(curr.length() == maxLength) {
            System.out.println(curr);

        // Else add each letter from the alphabet to new strings and process these new strings again
        } else {
            for(int i = 0; i < alphabet.length; i++) {
                String oldCurr = curr;
                curr += alphabet[i];
                possibleStrings(maxLength,alphabet,curr);
                curr = oldCurr;
            }
        }
    }
}
