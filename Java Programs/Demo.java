import java.util.*;
public class Demo{
	public static void main(String[] args) {
		int sum=0;

		// Using List 
		List<Integer> list =Arrays.asList(1,1,1,1,1,1);

		// Using Iterator
		Iterator<Integer> i1 =list.iterator();

		//Using iterable 
		Iterable<Integer> i2 =list;

		// Using iterator
		while(i1.hasNext()){
			int data=i1.next();
			sum+=data;
			System.out.println(data);
		}
		System.out.println("Sum is "+sum);
		// now iteraror 
		// also we can make iterator from iterable but not vice versa
		// Iterator<Integer> i1=i2.iterator(); -- this is used
		sum=0;
		for(int data : i2)
		{
			sum+=data;
		}
		System.out.println("Sum is "+sum);  // for hadoop 2 
	}
}