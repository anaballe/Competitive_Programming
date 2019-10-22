# include <stdio.h>
# include <stdlib.h>
int gcd(int x,int y)
{
	int rem;
	rem=x%y;
	if(rem==0)
		return y;
	else
		return gcd(y,rem);
}
 int main(int argc, char const *argv[])
{
	printf("Enter the values of number of first number adnd \n");
	int a,b,c=0,hcf=0;
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	hcf =gcd(a,b);
	printf("%d\n",hcf);
	return 0;
}