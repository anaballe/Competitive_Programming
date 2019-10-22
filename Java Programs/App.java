import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.Enumeration;
public class App{

public static void main(String[] args)throws Exception {
    // getting the list of interfaces in the local machine
    Enumeration<NetworkInterface> n = NetworkInterface.getNetworkInterfaces();
    while( n.hasMoreElements()){ //for each interface
        System.out.println("----------------------------------------------------");
        NetworkInterface e = n.nextElement();
    //name of the interface
        System.out.println("Interface Name: " + e.getName());
    /* A interface may be binded to many IP addresses like IPv4 and IPv6
        hence getting the Enumeration of list of IP addresses  */
        Enumeration<InetAddress> a = e.getInetAddresses();
        while( a.hasMoreElements()){
            InetAddress addr = a.nextElement();
            String add = addr.getHostAddress().toString();
            if( add.length() < 17 )
                System.out.println("IPv4 Address: " + add);
            else
                System.out.println("IPv6 Address: " + add);
        }
        if(e.getHardwareAddress() != null){
                    // getting the mac address of the particular network interface
            byte[] mac = e.getHardwareAddress();
                    // properly formatting the mac address
            StringBuilder macAddress = new StringBuilder();
            for(int i =0; i < mac.length; i++){
                macAddress.append(String.format("%03X%s", mac[i],(i < mac.length -1) ? "-":""));
            }
            System.out.println("Hardware adrress: " + macAddress.toString());
        }
        System.out.println("----------------------------------------------------");
    }
}
}
