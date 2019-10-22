# include <stdio.h>
void check(int a ,int b ,int c){
	printf("%d %d %d",a,b,c);
}
int main(int argc, char const *argv[])
{
	int i=7;
	check(i,i++,++i);
	return 0;
}