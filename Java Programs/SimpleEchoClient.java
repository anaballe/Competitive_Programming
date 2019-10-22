import java.io.*;
import java.net.*;
import java.nio.*;
import java.util.*;
public class SimpleEchoClient {
public static void main(String args[]) {
System.out.println("Simple Echo Client");
try {
System.out.println("Waiting for connection.....");
/*Localhost refers to the current machine. This has a specific
IP address: 127.0.0.1. While a machine may be associated
with an additional IP address, every machine can reach itself
using this localhost address.*/
InetAddress localAddress = InetAddress.getLocalHost();
try (Socket clientSocket = new Socket(localAddress, 6000);
//for sending from other device use IP Address in place of localAddress
PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()))) {
System.out.println("Connected to server");
Scanner scanner = new Scanner(System.in);
while (true) {
System.out.print("Enter text: ");
String inputLine = scanner.nextLine();
if ("quit".equalsIgnoreCase(inputLine)) {
break;
}
out.println(inputLine);
String response = br.readLine();
System.out.println("Server response: " + response);
}
}
} catch (IOException ex) {
// Handle exceptions
}
}
}