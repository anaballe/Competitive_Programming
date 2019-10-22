import java.io.*;
class NewThread implements Runnable
{
	String name;
	Thread t;
	NewThread(String nameOfThread)
	{
    name=nameOfThread;
    t=new Thread(this,name);
    System.out.println("New thread :  "+t);
    t.start();
	}
	public void run()
	{
		try
		{
			int i;
			for(i=0;i<6;++i)
			{
				System.out.println(name +" : "+i);
				Thread.sleep(500);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println(name+" : "+"InterruptedException has occured");
		}
		System.out.println(name+" has excited");
	}
}
class anand_thread
{
	 public static void main(String[] args) {
	 	new NewThread("one");
	 	new NewThread("two");
	 	new NewThread("three");
	 	try
	 	{
	 		Thread.sleep(1000);
	 	}
	 	catch(InterruptedException e)
	 	{
	 		System.out.println("Main thread InterruptedException has occured");
	 	}
	 	System.out.println("Main thread excited");
		
	}
}