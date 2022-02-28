#include<stdio.h>
#include<stdlib.h>
# define N 5
int front=-1,rear=-1;
int queue[N];
int x;
int n;
void enqueu()
{
 if(rear==N-1)
  {
   printf("overflow\n");
  }
  else if(front==-1&&rear==-1)
  {
   front=rear=0;
   queue[rear]=x;
  }
  else 
 {
  rear++;
  queue[rear]=x;
  }
 }
void dequeu()
{
 if(front==-1&&rear==-1)
 {
   printf("underflow\n");
 }
  else if(front==rear)
 {
  front=rear=-1;
 }
 else
 {
  printf("deleted element is %d\n",queue[front]);
  front++;
 }
}
void display()
{
 if(front==-1&&rear==-1)
  {
   printf("queue is empty\n");
  }
 else
 {
  for(int i=front;i<rear+1;i++)
  {
    printf("%d\n",queue[i]);
  }
 }
}
void main()
{
  int choice;
  printf("enter the number of elements\n");
  scanf("%d",&n);
  while(choice)
  {
   printf("\nenter choice\n1.enqueu\n2.dequeu\n3.display\n4.exit\n");
   scanf("%d",&choice);
   switch(choice)
    {
      case 1:
           printf("enter the elements\n");
           scanf("%d",&x);
           enqueu(x);
           break;
     case 2:
           dequeu(x);
           break;
     case 3:
           display();
           break;
     case 4:
           exit(0);
           break;
     default:
            printf("\n invalid choice\n");
            break;
      }
  }
 }       
