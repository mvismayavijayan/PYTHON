#include<stdio.h>
int main()
{
 int a[10],b[10],c[50],i,j,k,m,n;
 printf("enter 1st array size=\n");
 scanf("%d",&n);
 printf("enter 2nd array size\n");
 scanf("%d",&m);
 k=m+n;
 printf("enter the sorted array elements\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  c[i]=a[i];
 }
 k=i;
 printf("enter the sorted array elements\n");
 for(i=0;i<m;i++)
 {
   scanf("%d",&b[i]);
   c[k]=b[i];
   k++;
 }
 printf("\nmerged array\n");
 for(i=0;i<k;i++)
 printf("%d",c[i]);
 printf("\nafter sorting\n");
 for(i=0;i<k;i++)
 {
   int temp;
   for(j=i+1;j<k;j++)
   {
     if(c[i]<c[j])
      {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
       }
    }
 }
   for(int i=0;i<k;i++)
    {
      printf("%d",c[i]);
    }
 return 0;
}
 

  

