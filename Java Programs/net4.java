import java.io.*;
import java.net.*;
import java.nio.*;
import java.util.*;
public class net4
{
private static void displayURI(URI uri) {
System.out.println("getAuthority: " + uri.getAuthority());
System.out.println("getScheme: " + uri.getScheme());
System.out.println("getSchemeSpecificPart: "
+ uri.getSchemeSpecificPart());
System.out.println("getHost: " + uri.getHost());
System.out.println("getPath: " + uri.getPath());
System.out.println("getQuery: " + uri.getQuery());
System.out.println("getFragment: " + uri.getFragment());
System.out.println("getUserInfo: " + uri.getUserInfo());
System.out.println("normalize: " + uri.normalize());
}
public static void main(String[] args) {
	try {
URI uri = new
URI("https://www.packtpub.com/books/content/support");
displayURI(uri);
} catch (URISyntaxException ex) {
// Handle exceptions
}
}
}