
package localshare;

import java.io.*;
import java.net.*;
import java.util.HashMap;
import java.util.Scanner;



public class Reciever{
	static Thread t = null;
    public static void main(String args[]){
        try{
        	t = new Thread(new Client());
        	t.start();
        } catch( Exception e ){
        	//.
        }
        
    }
}

class Client implements Runnable
{
    private final String hostname= "255.255.255.255";
    private final int port=1234;
    private InetAddress host;
    private DatagramSocket socket;
    DatagramPacket packet;
    String name = null;
    String date = null;

    @Override
    public void run()
    {
        try
        {
            Scanner scanner = new Scanner(System.in);
            
            name = scanner.nextLine();
            date = new java.util.Date().toString();
            System.out.println("Date length: "+date.length()+" date: "+ date);
            //System.out.println("len of date: "+date.length());
            name = date +"01"+name;
            System.out.println("Name: "+name+" len: "+name.length());
            host = InetAddress.getByName(hostname);
            System.out.println(host);
            socket = new DatagramSocket (null);
            packet=new DatagramPacket (name.getBytes(), name.getBytes().length,host, port);
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
        while( true ){
        try
        {
            socket.send (packet);
            Thread.sleep(5000);
        } catch( Exception e ){
        	System.out.println("Exception occured: "+e);
        }
    }
    }
}
