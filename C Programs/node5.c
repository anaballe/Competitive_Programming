# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start =NULL;
 struct node *reverse(struct node *start,int t)
 {
  struct node *ptr,*preptr;
  struct node *ptr1=NULL,*new_node,*vtr;
  new_node=(struct node *)malloc(sizeof(struct node));
  int p=0,k=t;
  while(k>=0)
  {
  	
  	if(k==t)
  	{
  		ptr =start;
   //printf("%d\n",k );
  	p=0;
  		while(ptr -> next !=NULL)
  	{
  		if(p==k)
  			break;
  		preptr =ptr;
  		ptr =ptr -> next;
  		//printf("%d\n",ptr -> data );
  		
  		++p;
  	}
  	printf("%d\n",ptr -> data );
    new_node -> data=ptr -> data;
    new_node -> next =NULL;
    ptr1 =new_node;
   // printf("%d\n",ptr1 -> data );
    --k;
  	}
  	else
  	{
  		p=0;
  		ptr =start;
  	while(ptr -> next != NULL)
  	{
  		if(p==k)
  			break;
  		preptr =ptr;
  		ptr =ptr -> next;
  	//	printf("%d\n",ptr -> data );
  		++p;
  	}
  	printf("%d\n",ptr -> data );
  	vtr =ptr1;
  	while(vtr -> next !=NULL)
  		vtr =vtr -> next;
  	  vtr -> next =ptr;
  	  ptr -> next =NULL;
    // printf("%d\n",vtr -> data );
    //  printf("%d\n",k );
       
   }
   --k;
  }
//printf("%d\n",ptr1 -> data);

 }
int main(int argc, char *argv[])
{
	struct node *new_node, *ptr;
	
int num,t=0;
	
printf("Print -1 to eliminate\n");
	
printf("enter the number\n");
	
scanf("%d",&num);
	while(num!=-1)
	{
		
new_node = (struct node*)malloc(sizeof(struct node));
		
new_node -> data=num;
++t;
		if(start==NULL)
		{
			
new_node -> next = NULL;
			start = new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next = new_node;
			new_node->next=NULL;
		}
		//printf("node given %d\n",new_node -> data);
   printf("Enter the next number\n");
   scanf("%d",&num);
	}
	start =reverse(start,t);
}
