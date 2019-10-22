import java.io.*;
import java.util.*;
public class big1{
	public static void main(String[] args) {
		String data="Dehradun,32,Kanpur,37,Lucknow,42,Guhawati,30,Kolkata,33,Cuttack,38,Bhubhaneshwar,38,Noida,39,Nainital,29";
		int a=0,i,j,h=0,p=0,sum=0,min=0,max=0,maxp=0,minp=0,l=data.length();
		int k=0;
		char c,d;
		for(i=0;i<l;++i){
			c=data.charAt(i);
			if(c==',')
				++k;
		}
		//System.out.println("value is "+k);
		k=k+1;
		k=k/2;
		String sr[] =new String[k];
		int ar[] =new int[k];
		for (i=0;i<data.length()-1;++i){
			c=data.charAt(i);
			d=data.charAt(i+1);
			a=(int)d;

			if(c==',' && (a>=48 && a<=57)){
				//System.out.println("we got "+data.substring(h,i));
				sum=0;
				for(j=i+1;;++j){
					d=data.charAt(j);
					a=(int)d;
				    if(a>=48 && a<=57){
					   a=a-48;
					   sum=sum*10+a;
				    }
				    else{
					   break;
				    }
				    if(j==l-1)
				    	break;
				}
				ar[p]=sum;
				sr[p]=data.substring(h,i);
				h=j+1;
				i=j-1;
				//System.out.println("temperature of "+sr[p]+" is "+ar[p]+" with i as "+i+" out of "+l+" at a location of "+p);
				++p;
			}
		}
		min=ar[0];
		max=ar[0];
		for(i=0;i<p;++i){
			if(min>ar[i]){
				min =ar[i];
				minp=i;
			}
			if(max<ar[i]){
				max=ar[i];
				maxp=i;
			}
		}
		System.out.println("Maximum temperature of "+max+" is at "+sr[maxp]);
		System.out.println("Minimum temperature of "+min+" is at "+sr[minp]);
	}
}