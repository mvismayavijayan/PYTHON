#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head, *newnode;
void insert();
void delete();
void display();
void insert()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter data:");
 scanf("%d",&newnode->data);
 newnode->next=head;
 head=newnode;
}
void delete()
{
 newnode=head;
 if(newnode==NULL)
 {
 printf("list is empty");
 }
  else
 {
  newnode=head;
  head=newnode->next;
  free(newnode);
 }
}
void display()
{
 newnode=head;
 if(newnode==NULL)
 {
  printf("List is empty");
 }
  else
 {
  printf("list is\n");
  while(newnode!=NULL)
  {
   printf("\n%d",newnode->data);
   newnode=newnode->next;
  }
 }
}
int main()
{
 int ch;
 while(1) 
 {
  printf("\n select choice\n 1.insert\n 2.delete\n 3.display\n 4.exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
          insert();
          break;
   case 2:
          delete();
          break;
   case 3:
          display();
          break;
  case 4:
          exit(0);
          break;
  default:
          printf("invalid choice \n");
  }
 }
 return 0;
} 


