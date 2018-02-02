#include<stdio.h>
main()
{
 char s,i,count;
 printf("\n Enter a line");
 scanf("%s",&s);
 for(i=0;s[i]=="\0";i++)
 {
  if(s[i]==' ')
  {
   count++
   }
   printf("%d",count);
   }
