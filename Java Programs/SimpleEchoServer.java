import java.io.*;
import java.net.*;
import java.nio.*;
public class SimpleEchoServer {
public static void main(String[] args) {
System.out.println("Simple Echo Server");
try (ServerSocket serverSocket = new ServerSocket(6000)){
System.out.println("Waiting for connection.....");
Socket clientSocket = serverSocket.accept();
System.out.println("Connected to client");
try (BufferedReader br = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true)) {
String inputLine;
while ((inputLine = br.readLine()) != null) {
System.out.println("Server: " + inputLine);
out.println(inputLine);
}
}
}

catch (IOException ex) {
// Handle exceptions
}
}
}