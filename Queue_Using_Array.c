#include <stdio.h>
#include<stdlib.h>
 
void insert(int item,int n);
void delete();
void display();

int queue[100];
int rear = - 1;
int front = - 1;


void main()
 { 
   int item,choice,n;

    printf("\n Enter size of Queue [MAX=100] :");
    scanf("%d",&n);
   
    
    while (1)
      {
        printf("\n\tQUEUE OPERATION\n");

        printf("1. Enqueue \n2. Dequeue \n3. Display \n4. Exit");
        printf("\n\nEnter your choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1: printf("\nInset the element in queue : ");
             scanf("%d", &item);

            insert(item,n);
            break;

            case 2: delete();
            break;

            case 3: display();
            break;

            case 4: exit(0);

            default: printf("\nWrong selection! Try again!");
        } 
    } 
} 
 
void insert(int item,int n)
{
    
    if (rear == n - 1)
      {
        printf("\nQueue Overflow \n");
      }

    else
    {
        if (front == - 1)
      
        front = 0;
       
        rear = rear + 1;
        queue[rear] = item;
    }
}
 

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("\nQueue Underflow \n");
        return ;
    }
    else
    {
        printf("\n%d deleted from queue \n", queue[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");

        for (i = front; i <= rear; i++)
          {

            printf("%d ", queue[i]);
          }
        printf("\n");
    }
}
