# include <stdio.h>
# include <stdlib.h>
void move(int n,char source,char dest,char spare)
{
	if(n==1)
		printf("Move from %c to %c\n",source,dest);
	else
	{
		move(n-1,source,spare,dest);
		move(1,source,dest,spare);
		move(n-1,spare,dest,source);
	}
}
int main(int argc, char const *argv[])
{
	printf("Enter the number of rings\n");
	int n;
	scanf("%d",&n);
	move(n,'A','C','B');
	return 0;
}
