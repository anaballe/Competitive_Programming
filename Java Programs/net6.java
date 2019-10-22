import java.io.*;
import java.net.*;
import java.nio.*;
import java.util.*;
public class net6
{
	private static void displayInetAddressInformation(InetAddress address)
	{
		System.out.println("Address");
		System.out.println("Canonical Host Name : "+address.getCanonicalHostName());
		System.out.println("Host Name : "+address.getHostName());
		System.out.println("HostAddress : "+address.getHostAddress());
	}
	public static void main(String[] args)throws IOException {
		InetAddress address = InetAddress.getByName("www.mmmut.ac.in");
		displayInetAddressInformation(address);
	}
}
