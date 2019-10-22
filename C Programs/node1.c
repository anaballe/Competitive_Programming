# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start =NULL;
struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
while(ptr != NULL)
	{
		
printf("%d\n",ptr->data);
		
ptr = ptr -> next;
	}
	return start;
}
struct node *add_beg(struct node *start)
{
	struct node *new_node;
	new_node=(struct node *)malloc(sizeof(struct node));
	int num;
	printf("Enter the new data or node to be added at beginning\n");
	scanf("%d",&num);
	new_node -> data =num;
	new_node -> next =start;
	start=new_node;
    return start;
}
struct node *add_end(struct node *start)
{
	struct node *new_node,*ptr;
	new_node=(struct node *)malloc(sizeof(struct node));
	ptr=start;
	printf("Enter the node to be added at end\n");
	int num;
	scanf("%d",&num);
	new_node -> data=num;
	new_node -> next=NULL;
	while(ptr -> next!=NULL)
		ptr=ptr -> next;
	ptr -> next=new_node;
	return start;

}
struct node *add_before(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	
int num, val;
printf("\n Enter the data : ");
scanf("%d", &num);
printf("\n Enter the value before which the data has to be inserted : ");
scanf("%d", &val);
new_node = (struct node *)malloc(sizeof(struct node));
new_node -> data = num;
ptr = start;
while(ptr -> data != val)
	{
preptr = ptr;
ptr = ptr -> next;
	}
preptr -> next = new_node;
new_node -> next = ptr;
return start;
}
struct node *add_after(struct node *start)
{
	struct node *ptr,*preptr,*new_node;
	int num,val;
	printf("\n Enter the data : ");
scanf("%d", &num);
printf("\n Enter the value after which the data has to be inserted : ");
scanf("%d", &val);
new_node=(struct node *)malloc(sizeof(struct node));
new_node -> data=num;
ptr=start;
preptr=ptr;
while(preptr-> data!=val)
{
	preptr=ptr;
	ptr =ptr -> next;
}
preptr -> next=new_node;
new_node -> next=ptr;
return start;
}
struct node *del_beg(struct node *start)
{
	struct node *ptr;
	ptr=start;
	start=start -> next;
	free(ptr);
	return start;
}
struct node *del_end(struct node *start)
{
	struct node *ptr,*preptr;
	ptr=start;
	while(ptr -> next!=NULL)
	{
		preptr=ptr;
		ptr = ptr -> next;
	}
	preptr -> next=NULL;
	free(ptr);
	return start;
}
 struct node *del_node(struct node *start)
 {
 	struct node *ptr,*preptr;
 	int val;
 	printf("Enter the node which has to be deleted\n");
 	scanf("%d",&val);
 	ptr=start;
 	if(ptr -> data ==val)
 	{
 		start=del_beg(start);
 		return start;
 	}
 	else
 	{

 		while(ptr-> data !=val)
 		{
 			preptr=ptr;
 			ptr=ptr -> next;
 		}
 		preptr -> next=ptr -> next;
 		free(ptr);
 		return start;
 	}
 }
  struct node *del_after(struct node *start)
  {
  	struct node *ptr,*preptr;
  	ptr=start;
  	int num;
  	printf("Enter the node after which node has to be deleted \n");
  	scanf("%d",&num);
  	preptr=ptr;
  	while(preptr -> data!=num)
  	{
  		preptr=ptr;
  		ptr=ptr->next;
  	}
  	preptr ->next=ptr -> next;
  	free(ptr);
  	return start;
  }
   struct node *del_list(struct node *start)
   {
   	struct node *ptr,*preptr;
   	if (start!=NULL)
   	ptr=start;
   while(ptr!=NULL)
   {
   	start = del_beg(ptr);
   	ptr=start;
   }
   }
   struct node *sort(struct node *start)
   {
   	struct node *ptr1,*ptr2;
   	int temp;
   	ptr1=start;
   	while(ptr1 -> next!=NULL)
   	{
   		ptr2=ptr1 -> next;
   		while(ptr2!=NULL)
   		{
   			if(ptr1 -> data > ptr2 -> data)
   			{
   				temp=ptr1 -> data;
   				ptr1 -> data =ptr2 -> data;
   				ptr2 -> data =temp;
   			}
   			ptr2=ptr2 -> next;
   		}
   		ptr1=ptr1 -> next;
   	}
      return start ;
   }
 int main(int argc, char *argv[])
{
	struct node *new_node, *ptr;
	
int num;
	
printf("Print -1 to eliminate\n");
	
printf("enter the number\n");
	
scanf("%d",&num);
	while(num!=-1)
	{
		
new_node = (struct node*)malloc(sizeof(struct node));
		
new_node -> data=num;
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

	
 printf("Performing operations on nodes\n");
 int ch;
 while(1)
 {
 	printf("\n\n *****MAIN MENU *****");
		
printf("\n 1: Display the list");
		
printf("\n 2: Add a node at the beginning");
		
printf("\n 3: Add a node at the end");
		
printf("\n 4: Add a node before a given node");
		
printf("\n 5: Add a node after a given node");
		
printf("\n 6: Delete a node from the beginning\n");
printf("\n 7: Delete a node from the end");
		
printf("\n 8: Delete a given node");
		
printf("\n 9: Delete a node after a given node");
		
printf("\n 10: Delete the entire list");
		
printf("\n 11: Sort the list");
printf("Enter your choice of operation\n");
scanf("%d",&ch);
printf("\n");
switch(ch)
{
	case 1:
	start=display(start);
	break;
	case 2:
	start =add_beg(start);
	break;
	case 3:
	start=add_end(start);
	break;
	case 4:
	start =add_before(start);
	break;
	case 5:
	start=add_after(start);
	break;
	case 6:
	start=del_beg(start);
	break;
    case 7:
    start=del_end(start);
    break;
    case 8:
    start=del_node(start);
    break;
    case 9:
    start=del_after(start);
    break;
    case 10:
    start =del_list(start);
    break;
    case 11:
    start=sort(start);
    break;
    

}
if(ch>11)
break;
 }
	return 0;
}
