#include <stdio.h>
void main()
{
int i,j,k,a,b,c;
for(i=1;i<=50;++i)
{
for(j=1;j<=50;++j)
{
for(k=1;k<=50;++k)
{
a=i*i;
b=j*j;
c=k*k;
if((a+b)==c)
{
printf ("%d %d %d\n",i,j,k);
}
}
}
}
}

