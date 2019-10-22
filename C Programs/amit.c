# include <stdio.h>
int main(int argc, char const *argv[])
{
	int  a =5;
	printf("%d %d %d \n",a++,a,++a );
	int b = 9;
	printf("%d %d %d %d %d\n",++b,b,b++,b++,b++ );
	int c = 15;
	printf("%d %d\n",++c,c );
	return 0;
}