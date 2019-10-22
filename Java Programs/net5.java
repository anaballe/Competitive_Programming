import java.io.*;
import java.net.*;
import java.util.*;
import java.nio.*;
 public class net5 
 {
public static void main(String[] args)throws IOException  {
	InetAddress names[] = InetAddress.getAllByName("www.google.com");
	for (InetAddress element : names ) {
		System.out.println(element);
		
	}
}
 }
