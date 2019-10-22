import java.io.*;
import java.net.*;
import java.nio.*;
import java.util.*;
public class net3 
{
	public static String getMACIdentifier(NetworkInterface network) {
StringBuilder identifier = new StringBuilder();
try {
byte[] macBuffer = network.getHardwareAddress();
if (macBuffer != null) {
for (int i = 0; i < macBuffer.length; i++) {
identifier.append(String.format("%02X%s",macBuffer[i],(i < macBuffer.length - 1) ? "-" : ""));
}
} else {
return "---";
}
} catch (SocketException ex) {
ex.printStackTrace();
}
return identifier.toString();
}
	public static void main(String[] args) {
		try
		{
		InetAddress address = InetAddress.getLocalHost();
System.out.println("IP address: " + address);//.getHostAddress());
NetworkInterface network =NetworkInterface.getByInetAddress(address);
System.out.println("MAC address: " +getMACIdentifier(network));
}
catch(Exception e)
{
	//catches the exception
}
		
	}
}