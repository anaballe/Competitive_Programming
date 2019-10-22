# include <stdio.h>
# include <stdlib.h>
# define MAX 10
int a[MAX];
int front =-1,rear =-1;
void add_no(int num)
{
	if(rear==MAX-1)
	{
		printf("Overflow is occurring\n");
	}
	else if(rear==-1&& front ==-1)
	{
		rear =0;
		front =0;
	}
	else
	{
		++rear;
	}
	a[rear]=num;
}
void display()
{
	for (int i = front; i <=rear; ++i)
	{
		printf("%d\n",a[i] );
	}
}
int del()
{
  int num;
  if(front ==-1 || front > rear)
  {
    printf("Underflow has occured\n");
    return -1;
  }
  else
  {
  num = a[front];
  ++front;
  if(front > rear)
  {
    front=-1;
    rear =-1;
  }
  return num;
  }
}
int main(int argc, char const *argv[])
{
  printf("*************MAIN TABLE*************\n");
  int ch;
  int num;

  while(1)
  {


  printf("1. Add element to que\n");
  printf("2. Delete element from que\n");
  printf("3. Display the que\n");
  printf("Enter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
  	case 1:
  	printf("Enter value of number\n");
    scanf("%d",&num);
  	add_no( num);
  	break;
    case 2:
    num=del();
    printf("%d is deleted \n",num);
    break;
  	case 3:
  	display();
  	break;

  }
  if(ch>3)
  	break;
  }
	return 0;
}
