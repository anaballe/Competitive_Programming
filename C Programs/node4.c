# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>
struct stack 
{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
 struct stack *push(struct stack *top,int val)
 {

 	struct stack *ptr;
 	ptr =(struct stack *)malloc(sizeof(struct stack));
 	ptr -> data=val;

 	if(top==NULL)
 	{
       ptr -> next=NULL;
       top=ptr;
 	}
 	else
 	{
 		ptr -> next =top;
 		top=ptr;
 	}
 	return top;
 }
  struct stack *display(struct stack *top)
  {
  	struct stack *ptr;
  
ptr = top;
  
if(top == NULL)
printf("\n STACK IS EMPTY");
else
  {
    while(ptr != NULL)
    {
      
printf("\n %d", ptr -> data);
      
ptr = ptr -> next;
    }
  }
  
return top;

  }
  struct stack *pop(struct stack *top)
  {
    struct stack *ptr;
    ptr =top;
    if(top== NULL)
      printf("Stack is underflow\n");
    else
    {
      top =top -> next ;
      printf("Element deleted is %d\n",ptr -> data);
      free(ptr);

    }
    return top;
  }
int main(int argc, char const *argv[])
{
   
 int val,op;
   while(1)
   {
printf("\n *****MAIN MENU*****");
		
printf("\n 1. PUSH");
		
printf("\n 2. POP");
		
printf("\n 3. PEEK");
		
printf("\n 4. DISPLAY");
		
printf("\n 5. EXIT");
		
printf("\n Enter your option: ");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
      printf("Enter the value of number\n");
      scanf("%d",&val);
			top=push(top,val);
			break;
            case 4:
            top =display(top);
            break;
      case 2:
      top = pop(top);
      break;


		}
    if(op>5)
      break;
   }
	return 0;
}
