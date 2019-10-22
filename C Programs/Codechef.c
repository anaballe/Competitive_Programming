#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,t,i,j,k,l,sum,k1;
    scanf("%d",&n);
    l=2*n+1;
    char s[n+1][l];
    scanf("\n");
    for(i=0;i<n;i++){
        gets(s[i]);
    }
    sum=0;
    for(i=0;i<n;i++){
        k=0;
        k1=0;
        for(j=0;j<n;j++){
            if(s[i][2*j]=='T'){
                if(strcmp(s[i],s[j])!=0){
                    k1=1;
                    break;
                }
                 else{
                k++;
            }
            }
           
        }
        if(k1==0){
            sum=sum+k;
            break;
        }
        
    }
    printf("%d\n",sum);
}