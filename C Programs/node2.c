# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>
struct node {
	int data ;
	struct node *next;
};
struct node *start=NULL;
//narsimha karumanchi
struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr -> next != start)
	{
		
printf("%d\n", ptr -> data);
		
ptr = ptr -> next;
	}
	
printf("%d\n", ptr -> data);
	return start;
}
 struct node *add_beg(struct node *start)
 {
 	struct node *ptr,*new_node;
 	printf("Enter the number which has to be added at beginning\n");
 	int num;
 	scanf("%d",&num);
 	new_node=(struct node *)malloc(sizeof(struct node));
 	new_node -> data =num;
 	ptr=start;
 	while(ptr -> next !=start)
 		ptr=ptr -> next;
 	ptr -> next =new_node;
 	new_node -> next =start;
 	start =new_node;
 	return start;
 }
int main(int argc, char const *argv[])
{
 struct node *new_node, *ptr;
	
int num;
	
printf("\n Enter –1 to end");
	
printf("\n Enter the data : ");
	
scanf("%d", &num);
	while(num != -1)
	{
		
new_node = (struct node*)malloc(sizeof(struct node));
		new_node -> data = num;
		
if(start == NULL)
		{
			new_node -> next = new_node;
			start = new_node;
		}
		else
		
{	
ptr = start;
			while(ptr -> next != start)
				ptr = ptr -> next;
			ptr -> next = new_node;
			new_node -> next = start;
		}
		
printf("\n Enter the data : ");
		scanf("%d", &num);
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
	start = display(start);
	break;
	case 2:
	start = add_beg(start);
	break;

}
if(ch>11)
break;
 }
	return 0;
}