#include<stdio.h>
#include<stdlib.h>

void push(int item,int n);
void pop();
void display();

int stack[100], top = -1;

void main()
{
   int item, choice,n;

   printf("\n Enter size of STACK [MAX=100] :");
    scanf("%d",&n);
   
   while(1)
     {
      printf("\n\tSTACK OPERATION\n");
      printf("1. Push \n2. Pop \n3. Display \n4. Exit");

      printf("\nEnter your choice: ");
      scanf("%d",&choice);

      switch(choice)
    {
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&item);

		 push(item,n);
		 break;

	 case 2: pop();
		 break;

	 case 3: display();
		 break;

	 case 4: exit(0);

	 default: printf("\nWrong selection! Try again!");
      }
   }
}


void push(int item,int n)
{
   if(top == n-1)
      printf("\nStack is Full!,Overflow!");
   else
   {
      top++;
      stack[top] = item;
      printf("\n %d inserted",item);
   }
}


void pop()
  {
   if(top == -1)
      printf("\nStack is Empty!,Underflow!");
   
   else
   {
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}


void display()
  {
   if(top == -1)
      printf("\nStack Empty!");

   else
   {
      int i;

      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}
