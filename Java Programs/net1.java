import java.io.*;
import java.net.*;
import java.nio.*;
import java.nio.channels.*;

class net1
{
	public static void main(String[] args) {
		
	try {
URL url = new URL("http://www.google.com");
URLConnection urlConnection = url.openConnection();
InputStream inputStream = urlConnection.getInputStream();
ReadableByteChannel channel =
Channels.newChannel(inputStream);
ByteBuffer buffer = ByteBuffer.allocate(64);
String line = null;
while (channel.read(buffer) > 0) {
	//buffer.flip();
System.out.println(new String(buffer.array()));
buffer.clear();
}
channel.close();
} catch (IOException ex) {
// Handle exceptions
}

}
}