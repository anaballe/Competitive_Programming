%{
#include<stdio.h>
int lines=0, words=0, num=0, spaces=0, operator=0,numbers=0;
%}
%%


 
\n { lines++; words++;}
[\t ' '] { words++; spaces++;}
[0-9] num++;
[+-/=*%] operator++;
^[-][0-9]+ numbers++;
[0-9]+ { numbers++;}
%%





main(void)
{
yyin= fopen("inp.txt","r");
yylex();
printf(" \nThis File contains ...");
printf("\n\t%d digits", num);
printf("\n\t%d numbers", numbers);
printf("\n\t%d words",words);
printf("\n\t%d operators", operator);
printf("\n\t%d lines", lines);
printf("\n\t%d spaces", spaces);
}
 
int yywrap()
{
return(1);
}


