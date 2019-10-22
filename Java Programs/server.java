import java.io.*;
import java.net.*;
import java.nio.*;
import java.util.*;
public class server {
public static void main(String[] args) {
System.out.println("Simple Chat Server");
try (ServerSocket serverSocket = new ServerSocket(6000)){
System.out.println("Waiting for connection.....");
Socket clientSocket = serverSocket.accept();
System.out.println("Connected to client");
try (BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true)) {
String inputLine;
Scanner sc =new Scanner(System.in);
String outputline;
while ((inputLine = br.readLine()) != null) {
System.out.println("client :" + inputLine);
System.out.println("Server respnose : enter the text ");
outputline=sc.nextLine();
if("quit".equalsIgnoreCase(outputline))
break;
out.println(outputline);
}
}
}

catch (IOException ex) {
// Handle exceptions
}
}
}