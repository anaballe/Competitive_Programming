import java.io.*;
import java.util.*;
enum A
{
	apple(10),banana(12),grapes(16),peaches(13),mango(34);
	private int  quant;
	A(int p)
	{
		quant=p;
	}
	int getQuantity()
	{
		return quant;
	}
}
public class enum1
{
	public static void main(String[] args) {
		A ask;
		ask=A.apple;
		System.out.println("-----------------------------------");
		if(ask==A.mango){
			System.out.println(ask+" is a  orange colured fruit");
		}
		else
		{
			System.out.println(ask+" is not a orange  colured fruit");
		}
		switch(ask)
		{
			case apple:
			System.out.println(ask +" is a red coloured fruit");
			break;
			case banana :
			System.out.println(ask+" is yellow coloured fruit");
			break;
			case grapes:
			System.out.println(ask+ " is green colured fruit");
			break;
			case peaches:
			System.out.println(ask +" is pinkish colured fruit");
			break;
			case mango:
			System.out.println(ask+ " is a orange colured fruit");
			break;
		}
		A fruits[] =A.values();
		A fruit;
		for (A app : fruits ) {
			System.out.println("number of "+app+" "+app.getQuantity()+" and has ordinal value "+app.ordinal());
		}
		System.out.println();
		fruit=A.valueOf("banana");
		System.out.println("specified fruit is "+fruit);
		System.out.println();
		System.out.println("-------------------------------------");
	}
}
