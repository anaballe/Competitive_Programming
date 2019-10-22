# include<stdio.h>
 %{
int ch=0, bl=0, ln=0, wr=0;
%}
%%
[\n] {ln++;wr++;}
[\t] {bl++;wr++;}
[" "] {bl++;wr++;}
[^\n\t] {ch++;}
%%
int main()
{
FILE *fp;
char file[10];
printf("Enter the filename: ");
scanf("%s", file);
yyin=fp;
yylex();
printf("Character=%d\nBlank=%d\nLines=%d\nWords=%d", ch, bl, ln, wr);
return 0;
}
