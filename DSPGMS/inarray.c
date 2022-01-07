#include<stdio.h>
int main()
{
 int array[50],pos,i,n,value;
 printf("enter no of elements in the array\n");
 scanf("%d",&n);
 printf("enter elements");
 for(i=0;i<n;i++)
 scanf("%d",&array[i]);
 printf("please enter the location where you want to insert a new element\n");
 scanf("%d",&pos);
 printf("enter the value\n");
 scanf("%d",&value);
 n=n+1;
 for(i=n-1;i>=pos;i--)
  {
   array[i]=array[i-1];
  } 
   array[pos-1]=value;
   printf("resultant array is \n");
   for(i=0;i<n;i++)
  {
   printf("%d\n",array[i]);
  }
return 0;
}
