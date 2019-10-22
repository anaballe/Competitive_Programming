import java.io.*;
import java.nio.*;
import java.net.*;
class net
{
	 public static void main(String[] args) {
	 	try {
URL url =  new URL("http://www.google.com");
URLConnection urlConnection = url.openConnection();
BufferedReader br = new BufferedReader(new InputStreamReader(urlConnection.getInputStream()));
String line;
while ((line = br.readLine()) != null) {
System.out.println(line);
}
br.close();
} catch (Exception ex) {
// Handle exceptions
}
		
	}
}