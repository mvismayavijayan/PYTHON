#include<stdio.h>
int main()
{
 int array[50],pos,i,n;
 printf("enter the no of elements in array\n");
 scanf("%d",&n);
 printf("enter elements");
 for(i=0;i<n;i++)
 scanf("%d",&array[i]);
 printf("enter the location where you wish to delete element\n");
 scanf("%d",&pos);
 if(pos>=n+1)
 printf("deletion is not possible\n");
 else
 {
  for(i=pos-1;i<n-1;i++)
  array[i]=array[i+1];
  printf("resultant array is\n");
  for(i=0;i<n-1;i++)
  printf("%d\n",array[i]);
 }
  return 0;
}
