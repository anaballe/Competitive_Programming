#include <stdio.h>
int isPrime(int n)
{
int k,f=0;
for(k=1;k<=n;++k)
if(n%k==0)
++f;
if(f==2)
return 1;
else 
return 0;
}
void main()
{
int i,a,b,c,d;
d=1;
a=0;
b=1;

for(i=1;;++i)
{
c=a+b;
a=b;
b=c;
if(c>150)
break;
d=isPrime(c);
if(d==1)
printf(" %d",c);
}
printf("\n");
}


