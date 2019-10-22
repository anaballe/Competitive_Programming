#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);     
	
	int ar[num];
	int i,max=0,fact=1;
	for(i=0;i<num;++i){
	    printf("%d",&ar[i]);
	    if(max < ar[i])
	    {
	        max = ar[i];
	    }
	    
	}
	int fr[max+1];
	fr[0]=0;
	for(i=1;i<=max;++i){
	    fact = fact * i;
	    fr[i]= fact;
	}
	for(i=0;i<num;++i){
	    printf("%d",fr[ar[i]]);
	}
}

