#include<stdio.h>
#include<stdlib.h>
#define N 5
int cqueu[N];
int front=-1;int rear=-1;
int x;
void enque()
{
 if((rear+1)%N==front)
 {
  printf("overflow\n");
 }
  else if(front==-1&&rear==-1)
  {
   front=rear=0;
   cqueu[rear]=x;
  }
  else
  {
   rear=(rear+1)%N;
   cqueu[rear]=x;
  }
}
 void deque()
 {
  if(front=-1&&rear==-1)
  {
   printf("underflow\n");
  }
 else if(front==rear)
  {
   front=-1;
   rear=-1;
  }
 else
 {
  printf("deleted element is %d",cqueu[front]);
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
      while(front<=rear)
      {
       printf("%d\n",cqueu[front]);
       front=(front+1)%N;
      }
    }
  }
void main()
{
 int choice;
 while(choice)
 {
  printf("enter your choice\n1.enque\n2.deque\n3.display\n4.exit\n");
  scanf("%d",&choice);
  switch(choice)
 {
    case 1:
          printf("enter the elements\n");
          scanf("%d",&x);
          enque(x);
          break;
    case 2:
          deque();
          break;
    case 3:
          display();
          break;
    case 4:
          exit(0);
          break;
    default:
          printf("\n invalid choice");
          break;
  }
 }
}
