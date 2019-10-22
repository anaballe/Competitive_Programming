import java.io.*;
import java.util.*;
import java.lang.*;
public class code1{
	public static void main(String[] args)throws IOException {
		int i,j,x,count = 0,flag =0,y,t=0,dis = 1000,pis =1000,ktr = 0,zz=0;
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		String s = br.readLine();
		String [] kt =s.split("[,]");
		int n = Integer.parseInt(kt[0]);
		int m = Integer.parseInt(kt[1]);
		int k = Integer.parseInt(kt[2]);
		int ar[][] =new int[m][n];
		for(i=0;i<m;++i){
			for(j=0;j<n;++j){
				ar[i][j]=0;

			}
		}
		int [] bt = new int[2*k];
		
		j=0;
		for(i=0;i<k;++i){
			String vtr = br.readLine();
			String [] v = vtr.split("[,]");
			int a = Integer.parseInt(v[0]);
			int b = Integer.parseInt(v[1]);
			
			ar[a][b] = 1;
			
			bt[j]=a;
			bt[j+1]=b;
			
			j=j+2;
			
		}
		
		
		for(i=0;i<m;++i){
			for(j=0;j<n;++j){
				if(ar[i][j]==0){
					t=0;
					dis = 1000;
					flag=0;
					dis =  Math.abs(bt[0]-i)+Math.abs(bt[1]-j);
				for(x=2;x<2*k;x=x+2){
					
					
					
						pis = Math.abs(bt[x]-i)+Math.abs(bt[x+1]-j);
						if(pis < dis){
							dis = pis;
							flag = 0;
						}
						else if(pis == dis){
							flag =1 ;
							
						}
						
				

			}
			if(flag == 1)
				++count ;
		}
		
		}
	}
     System.out.print(count);
	}
}