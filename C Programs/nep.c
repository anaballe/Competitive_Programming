#include <stdio.h>
#include <string.h>
int main(){
  int i,j,k=0,l;
  char c[100],d[100];
  scanf("%s",c);
  scanf("%s",d);
  int a[26]={0};
  int b[26]={0};
  for(i=0;i<strlen(c);++i){
    j=c[i];
    j-=97;
    ++a[j];
  }
  for(i=0;i<strlen(d);++i){
    j=d[i];
    j-=97;
    ++b[j];
  }
  for(i=0;i<26;++i){
    if(a[i]==b[i])
      printf("%c %d %d\n",(97+i),a[i],b[i]);
  }
  for(i=0;i<26;++i){
    if(a[i]!=b[i])
      k=1;
  }
  if(k==0)
    printf("YES");
  else
    printf("NO");
  return 0;
}