import java.io.*;
class twi
{
public static void main(String args[])throws IOException
{
int i,j,a,c=0,d=0;
for(i=1;i<=200;++i)
{
c=0;
d=0;
a=i+2;
for(j=1;j<=i;++j)
if(i%j==0)
++c;
for(j=1;j<=a;++j)
if(a%j==0)
++d;
if(c==2&&d==2)
{
System.out.print(i+" "+a+'\n');
}
}
}
}
