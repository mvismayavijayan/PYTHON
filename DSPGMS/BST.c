#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 int temp; 
 struct node *left,*right;
};
typedef struct node node;


node *newnode(int item)
{

 node *temp=(struct node*)malloc(sizeof(newnode));
 temp->data=item;
 temp->left=temp->right=NULL;
 return temp;
}
node *insert (node *root, int ele)
{
 if(root==NULL)
 return newnode(ele);
 if(ele<root->data)
 root->left=insert(root->left,ele);
 else
 root->right=insert(root->right,ele);
 return root;
}
node*create(node*root)
 {
   int num,i,ele;
   printf("\n enter number of nodes:");
   scanf("%d",&num);
   printf("\n enter elements:");
   for(i=0;i<=num;i++)
    {
      scanf("%d",&ele);
      root = insert(root,ele);
    }
return root;
  }
void inoder(node *root)
{
 if (root!=NULL)
  {
    inoder(root->left);
    printf("%d->",root->data);
    inoder(root->right);
   }
}
node*minvalnode(node *p)
{
 node*current;
 current=p;
 while(current && current->left!=NULL)
 current=current->left;
 return current;
}
node*delete(node*root,int ele)
{
 if(root==NULL)
 return root;
 if(ele<root->data)
 root->right=delete(root->right,ele);
 else
 {
  if(root->left==NULL)
  {
   node*temp=root->right;
   free(root);
   return temp;
  }
 node*temp=minvalnode(root->right);
 root->data=temp->data;
 root->right=delete(root->right,temp->data);
 }
return root;
} 
int main()
{
 node *root=NULL;
 int ele;
 int e=1,ch;
 while(e)
 {
  printf("\nMENU\n");
  printf("\n\t1.create\n\t2.insert\n\t3.inorder traversal\n\t4.delete\n\t5.exit");
  printf("\n......\n");
  printf("\n enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
            root=create(root);
            break;
    case 2:
            printf("\n enter the  element to insert");
            scanf("%d",&ele);
            root=insert(root,ele);
            break;
    case 3:
            inoder(root);
            break;

    case 4:
            printf("\n enter the  element to delete");
            scanf("%d",&ele);
            root=insert(root,ele);
            break;
    case 5:      
            e=0;
            break;
    default:
            printf("\n invalid choice\n");
           
   }
  }
return 0;
} 
    
                                   
