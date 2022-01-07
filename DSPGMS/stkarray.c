#include<stdio.h>
int stack[100],i,j,choice,n,top=-1;
void push();
void pop();
void peek();
void display();
void main()
{
 printf("enter the number of elements:\n");
 scanf("%d",&n);
 printf("\n\n");
 while(choice!=5)
 {
  printf("\n1.push,\n2.pop,\n3.peek,\n4.display,\n5.exit\n");
  printf("enter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
     case 1:
              push();
              break;
     case 2:
              pop();
              break;
     case 3:
              peek();
              break;
     case 4:
              display();
              break;
     case 5:
              printf("existing the stack \n");
              break;
    default:
              printf("enter a valid choice\n");
              break;
  }
 }
}
void push()
{
 int val;
  if(top==n)
   {
     printf("\noverflow");
   }
  else
   {
     printf("\n enter the value");
     scanf("%d",&val);
     top=top-1;
     stack[top]=val;
     printf("\n value pushed");
    }
 }
void pop()
{
 if(top==-1)
 {
  printf("underflow\n");
 }
  else
 {
  printf("poped item is %d\n",stack[top]);
 }
}
void peek()
{
 if(top==-1)
 {
  printf("stack is empty\n");
 }
 else
 {
  printf("top of stack is %d\n",stack[top]);
 }
}
void display()
{
 if(top==-1)
 {
  printf("stack is empty\n");
 }
else
 {
  printf("element of stack is %d\n",stack[top]);
  for(i=top;i>=0;i++)
  {
   printf("%d\n",stack[i]);
  }
 }
}


              
           
