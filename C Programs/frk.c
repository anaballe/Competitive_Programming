#include <stdio.h> 
#include <unistd.h> 
int main() 
{ 
	
if(fork()==0)
    printf("  hello boys ");
else
 printf("  hello");
    
    return 0; 
} 