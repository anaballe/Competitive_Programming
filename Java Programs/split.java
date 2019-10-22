import java.io.*;
public class split
{
	public static void main(String[] args)throws IOException {
		InputStreamReader imp =new InputStreamReader(System.in);
		BufferedReader br =new BufferedReader(imp);
		String s = br.readLine();
		System.out.println(s);
		String [] k =s.split("\t");

		
		/*String t= s.replaceAll("^ +| +$|(?<= ) ", ",");
		System.out.println(t);
		String [] k =t.split("[  +]");
		for (int i=0;i<k.length ;++i ) {
			System.out.println(k[i]);
			
		}*/
		for (int i=0;i<k.length ;++i ) {
			System.out.println(k[i]);
		}
		//char c =s.charAt(14);
		//int d = (int)c;
  //System.out.println(d);
		int c = Integer.parseInt(k[2]);
		c+=2;
		System.out.println(c);
		int d = Integer.parseInt(k[3]);
		d+=2;
		System.out.println(d);
		
			
	}
}