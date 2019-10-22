#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




/*
 * Complete the function below.
 */
int maximumPackages(int s[],int k[],int r[],int c[],int n,int m) {
    // Return the maximum number of packages that can be put in the containers.
     double a,b;
    int i,j,t=0,sum=0;
    for(i=0;i<n;++i){
        for(j=0;j<n-1;++j){
            if(s[j]>s[j+1]){
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
                t=k[j];
                k[j]=k[j+1];
                k[j]=t;
            }
        }
    }
    for(i=0;i<m;++i){
        for(j=0;j<m-1;++j){
            if(r[j]>r[j+1]){
                t=r[j];
                r[j]=r[j+1];
                r[j+1]=t;
                t=c[j];
                c[j]=c[j+1];
                c[j]=t;
            }
        }
    }
    
    for(i=0;i<m;++i){
       for(j=0;j<n;++j){
           a= 2*r[i];
           b=s[j]*sqrt(2);
           if(a>b && k[j]<=c[i])
           {
               sum+=k[j];
               c[i]=c[i]-k[j];
               k[j]=0;
           }
           else if(a>b && k[j]>c[i]){
               sum+=c[i];
               k[j]=k[j]-c[i];
               c[i]=0;
           }
       }
          
    }
    
    return sum;

}



int main()
{
    int i,n,m;
    int S[500],K[500],R[500],C[500];
    scanf("%d %d",&n,&m);
    
       for(i=0;i<n;++i){
           scanf("%d",&S[i]);
       } 
    for(i=0;i<n;++i){
           scanf("%d",&K[i]);
       } 
    for(i=0;i<m;++i){
           scanf("%d",&R[i]);
       } 
    for(i=0;i<m;++i){
           scanf("%d",&C[i]);
       } 
    int res=maximumPackages(S,K,R,C,n,m);
      printf("%d\n",res );
}

