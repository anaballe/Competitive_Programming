#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,t,n,k,flag = 0;
	scanf("%d",&t);
	for(i=0;i<t;++i){
	    scanf("%d",&n);
	    int A[n];
	    flag = 0;
	    for(j=0;j<n;++j)
	        scanf("%d",&A[j]);
	    for(j=0;j<n;++j){
	        for(k=0;k<n;++k){
	            if(A[j] == A[k] && j != k){
	                flag = 1;
	                break;
	            }
	        }
	        if(flag == 1)
	            break;
	    }
	    if(flag == 1)
	        printf("Yes\n");
	    else
	        printf("No\n");
	}
	return 0;
}

