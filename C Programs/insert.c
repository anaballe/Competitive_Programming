# include <stdio.h>
# define size 10
int a[size];
 void insert_sort(int b[],int n)
 {
 	int i,j,temp;
    
 		printf("\n");
 		printf("Transitions\n");
 	for(i=1;i<n;++i){
 		temp=b[i];
 		j=i-1;
 		while(b[j]>temp && j>=0){
 			b[j+1]=b[j];
 			--j;
 		}
 		b[j+1]=temp;
 		for (int k=0;k<n;++k)
 		{
 			/* code */
 			printf("%d ",b[k] );
 		}
 		printf("\n");
 	}

 	printf("\n");
 	printf("Elements after sorting\n");
 	for ( i = 0; i < n; ++i)
  	{
  		/* code */
  		printf("%d ",b[i]);
  	}
  	printf("\n");
 }
  
 int main(int argc, char const *argv[])
{
	int i,n ;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for ( i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d",&a[i]);
	}

	printf("\n");
	printf("elements before sorting\n");
	for (i = 0; i < n; ++i)
  	{
  		/* code */
  		printf("%d ",a[i]);
  	}
  	printf("\n");
  //	printf("Elements after sorting\n");
  	insert_sort(a,n);
	return 0;
}