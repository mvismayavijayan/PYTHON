#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int bin_verify(char []);
void union1(char bin1[],char bin2[],char result[])
{
 int i = strlen(bin1) - 1;
 int j = strlen(bin2) - 1;
 int carry = 0, temp, num1, num2;
 while(i>-1 && j>-1)
 {
  num1 = bin1[i]-'0';
  num2 = bin2[j]-'0';
  temp=num1 + num2 + carry;
  if(temp / 2 == 1)
  {
   carry = 1;
   temp=temp%2;
  }
   if(i>j)
  { 
   result[i+1]=temp+'0';
   result[strlen(bin1)+1]='\0';
  }
 else
  {
   result[j+1]=temp+'0';
   result[strlen(bin2)+1]='\0';
  }
   i--;
   j--;
}
  while(i>-1)
 {
  temp=bin1[i]+carry-'0';
  if(temp/2==1)
  {
    carry=1;
    temp=temp%2;
   }
   result[i+1]=temp+'0';
   i--;
  }
  while(j>-1)
  {
   temp=bin2[j]+carry-'0';
   if(temp%2==1)
   {
     carry=1;
     temp=temp%2;
   }
   result[j+1]=temp+'0';
   j--;
  }
   if(carry)
   {
    result[0]='1';
   }
    else
   {
     result[0]='0';
   }
}
int bin_verify(char str[])
{
 int i;
 for(i=0;i<strlen(str);i++)
 {
  if((str[i]='0'!=1)&&(str[i]-'0'!=0))
  {
    return 1;
  }
 }
return 0;
}

void union1(char[],char[],char[]);
void main()
{
 char bin1[33],bin2[33],result[33];
 int len1,len2,check;
 printf("enter binary number 1:");
 scanf("%s",bin1);
 printf("enter binary number2:");
 scanf("%s",bin2);
 check=bin_verify(bin1);
 if(check)
 {
  printf("invalid binary number %s\n",bin1);
  exit(0);
 }
  check=bin_verify(bin2);
  if(check)
 {
  printf("invalid binary number %s\n",bin2);
  exit(0);
 }
  union1(bin1,bin2,result);
  printf("%s+%s=%s\n",bin1,bin2,result);
}


