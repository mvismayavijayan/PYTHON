#include<stdio.h>
int main()
{
 int arr[10],found,i,search,n;
 printf("enter the no of elements\n");
 scanf("%d",&n);
 printf("enter elements in array:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("enter the elements to search\n");
 scanf("%d",&search);
 found=0;
 for(i=0;i<n;i++)
 {
  if(arr[i]==search)
   {
     found=1;
     break;
   }
 }
 if(found==1)
 {
   printf("%d is found ",search);
 }
  else
 {
   printf("%d is not found ",search);
 }
  return 0;
}

