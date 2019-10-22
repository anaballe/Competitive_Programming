import java.io.*;
public class minAndmax{
	public static void main(String[] args) {
		String  data[]={"Dehradun","32","Kanpur","37","Lucknow","42","Guhawati","30","Kolkata","33","Cuttack","38","Bhubhaneshwar","38","Noida","39","Nainital","29"};

		int min=Integer.parseInt(data[1]);
		int max=Integer.parseInt(data[1]);
		int p1=0,p2=0;
		for (int i=1;i<18;i=i+2){
			if(min > Integer.parseInt(data[i]))
				{
					min=Integer.parseInt(data[i]);
					p1=i-1;
				}
			if(max<Integer.parseInt(data[i]))
				{
					max=Integer.parseInt(data[i]);
					p2=i-1;
				}
		}
		System.out.println("Minimum number is "+min+" at "+data[p1]);
		System.out.println("Maximum number is "+max + " at "+data[p2]);
	}
}