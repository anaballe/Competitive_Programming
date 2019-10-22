# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>
struct node 
{
	int data;
	struct node *next;
};
struct queue 
{
	struct node *rear;
	struct node *front;
};
struct queue *q;
 void create(struct queue *q)
 {
 	q -> rear =NULL;
 	q -> front = NULL;
 }
 struct queue *add(struct queue *q,int val)
 {
  struct node *ptr;
  //struct node *ptr;
	
ptr = (struct node*)malloc(sizeof(struct node));
	ptr -> data = val;
	if(q -> front == NULL)
	{
		q -> front = ptr;
		q -> rear = ptr;
		q -> front -> next = q -> rear -> next = NULL;
	}
	else
	{
		q -> rear -> next = ptr;
		q -> rear = ptr;
		q -> rear -> next = NULL;
	}
	
return q;
 }
 struct queue *display(struct queue *q)
 {
 	struct node *ptr;
	
ptr = q -> front;
	
if(ptr == NULL)
		
printf("\n QUEUE IS EMPTY");
	else
	{
		printf("\n");
		while(ptr!=q -> rear)
		{
			printf("%d\t", ptr -> data);
			ptr = ptr -> next;
		}
		printf("%d\t", ptr -> data);
	}
	
return q;
 }
int main(int argc, char const *argv[])
{
   printf("***********TABLE****************\n"); 
  int num,val;
create(q);
   while(1)
   {
   printf("\n 1. INSERT");
printf("\n 2. DELETE");
printf("\n 3. PEEK");
		
printf("\n 4. DISPLAY");
		
printf("\n 5. EXIT");
		
printf("\n Enter your option : ");
scanf("%d",&num);
switch(num)
{
	case 1:
	printf("Enter the number to be added \n");
	scanf("%d",&val);
	q=add(q,val);
	break;
	case 4:
	q=display(q);
	break;
}
   }
	return 0;
}