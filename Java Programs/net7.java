import java.io.*;
import java.nio.*;
import java.net.*;
import java.util.*;
public class net7
{
	public static void main(String[] args)throws IOException {
		String add="www.mmmut.ac.in";
		InetAddress[] a=InetAddress.getAllByName(add);
		for(InetAddress t : a)
		{
			try
			{
				if (t.isReachable(10000)){
					System.out.println(t+" is Reachable");
				}
				else
				{
					System.out.println(t+" is not Reachable");
				}
			}
			catch(IOException e)
			{
				//
			}
		}
	}
}
