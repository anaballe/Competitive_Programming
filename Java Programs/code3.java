import java.io.*;
import java.lang.*;
public class code3{
	public static void main(String[] args)throws IOException {
		int n ,i,j;
		double dist =0.0,v=0.0,t=0.0,a=0.0,b=0.0,c=0.0,d=0.0,e=0.0,f=0.0;
		InputStreamReader imp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(imp);
		n = Integer.parseInt(br.readLine());
		String s = br.readLine();
        String [] k = s.split("[,]");
        double  [] arr = new double[3*n];
        for(i=0;i<3*n;++i){
        	arr[i] = Double.parseDouble(k[i]);
        }
        for(i=0;i<3*n-3;i=i+3){
        	a = arr[i];
        	b =arr[i+1];
        	c = arr[i+2];
        	d = arr[i+3];
        	e = arr[i+4];
        	f = arr[i+5];
        	
                    if(b==0 && f==10){
                    	f = f + e;
                    	dist = dist +Math.sqrt((a-d)*(a-d)+(c-f)*c-f);
                    }
                    else if (b==0 && d==0){
                    	d = d + e;
                    	dist = dist + Math.sqrt((a-d)*(a-d)+(c-f)*(c-f));
                    }
                    else if (b==0 && d==10){
                    	d = d + e;
                    	dist =  dist +Math.sqrt((a-d)*(a-d)+(c-f)*(c-f));
                    }
                    else if (b==0 && e==10){
                          v = 10-c + 10+10-f;
                          t = a -d;
                          dist = dist + Math.sqrt(v*v+t*t);
                    }
                    else if(b == 10 && e==0){
                    	v = 10-c + 10+10-f;
                          t = a -d;
                          dist = dist + Math.sqrt(v*v+t*t);

                    }
                    else if(b==10 && d==0){
                    	d = d+10-e;
                    	dist = dist +Math.sqrt((a-d)*(a-d)+(c-f)*(c-f));
                    }
                    else if(b==10 && f==10){
                    	f = f+10-e;
                    	dist = dist+ Math.sqrt((a-d)*(a-d)+(c-f)*(c-f));
                    }
                    else if(b==10 && d==10){
                    	d = d+10-e;
                    	dist = dist +Math.sqrt((a-d)*(a-d)+(c-f)*(c-f));
                    }
                    else if (a==0 && f==10){
                    	f =f +d;
                    	dist = dist +Math.sqrt((b-e)*(b-e)+(c-f)*(c-f));
                    }
                    else if(a==10 && d==0){
                    	t = 10 -f +10+10-c;
                    	v = b-e;
                    	dist= dist +Math.sqrt(t*t+v*v);
                    }
                    else if(a==10 && e==0){
                    	t = b+10-d;
                    	v = f-c;
                    	dist = dist +Math.sqrt(t*t+v*v);
                    }
                    else if (a==10 && e==10){
                    	e = e+10 -d;
                    	dist = dist +Math.sqrt((e-b)*(e-b)+(c-f)*(c-f));
                    }
                    else if(c==10 && d==0){
                    	c = c + a;
                    	dist = dist +Math.sqrt((c-f)*(c-f)+(b-e)*(b-e));
                    }
                    else if(c==10 && d==10){
                    	c = c+10-a;
                    	dist = dist +Math.sqrt((c-f)*(c-f)+(b-e)*(b-e));
                    }
                    else if (c==10 && e==0){
                    	e = b + 10 - f;
                    	dist = dist +Math.sqrt((e*e)+(a-d)*(a-d));
                    }
                    else if(c==10 && e==10){
                    	e = b +10 -f;
                    	dist = dist +Math.sqrt((e-b)*(e-b)+(a-d)*(a-d));
                    }
                    else if(a==0 && d==10){
                    	t = 10+10-c+10-f;
                    	v = b-e;
                    	dist=dist +Math.sqrt(t*t+v*v);
                    }
                    else if(a==10 && f==10){
                    	f= f+10-a;
                    	dist = dist +Math.sqrt((c-f)*(c-f)+ (b-e)*(b-e));
                    }
                    else if(a==0 && f==10){
                    	f=f+d;
                    	dist=dist+Math.sqrt((c-f)*(c-f)+(e-b)*(e-b));
                    }
                    else {
                    	t = Math.sqrt((a-d)*(a-d)+(b-e)*(b-e)+(c-f)*(c-f));
                    	v = (22*t)/(21);
                    	dist = dist +v;
                    }
        	
        }
        dist = Math.round(dist*100.0)/100.0;
        System.out.println(dist);
	}
}