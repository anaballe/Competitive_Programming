import java.io.*;
//import java.util.Arrays;
public class wordcount{
	public static void main(String[] args)throws IOException {
		
		BufferedReader reader = new BufferedReader(new InputStreamReader(new FileInputStream("/home/anandshukla/Downloads/test_data.txt")));
		String line;
		String [] words = new String[100000];
		int [] freq = new int[100000];
		int f=0,i,z=0,j,r =0,l=0,v=0;
		for( i =0;i < 10000;++i){
			freq[i]=0;
		}
		while ((line = reader.readLine()) != null) {
 			// Do something with line
 			
 			String [] k = line.split("[ ,]");
 			l = k.length;
 			for(i =0 ;i < l;++i){
 				words[v] = k[i];
 				freq[v] = 1;
 				++v;
 			}

		}
        // Arrays.sort(words);
		// to find the frequency of all words
	/*	for(i = 0;i < v;++i){
			System.out.println(words[i]);
		}*/
		for(i = 0;i < v;++i){
			f = 0;
			//z = 0;
			/*for(j = i;j<v;++j){
				if(words[i] == words[j])
					++z;
				break;
			}*/
			for(j = 0;j<v;++j){
				if(words[i].equals(words[j])){
					++ f;
					r = j;
				}
			}
			if(i==r){
				System.out.println("("+words[i]+","+f+")");
			}
			
		}

			
		}
	}
