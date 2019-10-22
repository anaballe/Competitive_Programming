/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Codechef
{
	public static void main (String[] args) throws IOException
	{
		try{
		InputStreamReader imp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(imp);
		int n = Integer.parseInt(br.readLine());
		String [] k = new String[n];
		int i,j,cts = 0,max =0,flag = 0;
		for(i=0;i<n;++i){
		    k[i] = br.readLine();
		    k[i] = k[i].replaceAll("\\s+","");
		}
		
		for(i=0;i<n;++i){
		    cts = 0;
		    flag = 0;
		    for(j=0;j<n;++j){
		        if(k[i].equals(k[j])){
		            ++ cts;
		        }
		        else{
		        	if(k[i].charAt(j) == 'T' && k[j].charAt(i) == 'F'){
		    			flag = 1;
		    			break;
		    		}
		        }
		    }
		    

		    if(max < cts && flag == 0){
		        max = cts;
		    }
		}
		System.out.println(max);
		}
		catch(Exception e){
		    return ;
		}
	}
}
