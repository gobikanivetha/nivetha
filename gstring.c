#include<stdio.h>
int main()
{
 int a,b;
 char str1,str2;
 printf("\n Enter the first string");
 scanf("%s",&str1);
 printf("\n Enter the second string");
 scanf("%d",&str2);
 a=strlen(str1);
 b=strlen(str2);
 if(a>b)
 {
  printf("%d",a);
  }
  else if(a<b)
  {
   printf("%d",b);
   }
   else
   {
    printf("%d%d",a,b);
   }
   return 0;
   } 
