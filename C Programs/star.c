# include <stdio.h>
void main()
{
int i,j,sp=20;

for(i=1;i<=9;++i)
{
for(j=1;j<sp;++j)
printf(" ");
--sp;
for(j=1;j<=i;++j)
printf("*");
printf("\n");
}
} 
