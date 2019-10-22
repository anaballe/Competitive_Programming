# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>
struct node 
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *start=NULL;
 struct node *display(struct node *start)
 {
 	struct node *ptr;
 	ptr=start;
 	while(ptr!=NULL)
 	{
 		printf("%d\n",ptr -> data);
 		ptr=ptr -> next;
 	}
 	return start;
 }
int main(int argc, char const *argv[])
{
 struct node *ptr,*new_node ;
 int num;
 printf("Enter the value of node\n");
 scanf("%d",&num);
 printf("Enter -1 to eliminate\n");
 while (num!=-1)
 {
 	if(start==NULL)
 	{
 		new_node=(struct node *)malloc(sizeof(struct node));
 		new_node -> prev=NULL;
 		new_node -> data=num;
 		new_node -> next=NULL;
 		start=new_node;
 		//return start;
 	}
 	else
 	{
 		new_node=(struct node *)malloc(sizeof(struct node));
 		new_node -> data=num;
 		ptr=start;
 		while(ptr -> next!=NULL)
 			ptr=ptr-> next;
 		ptr -> next=new_node;
 		new_node -> prev=ptr;
 		new_node -> next =NULL;
 		//return start;

 	}
 	printf("Enter the value of next node \n");
 	scanf("%d",&num);
 }
 start=display(start);
	return 0;
}