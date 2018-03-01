#include<stdio.h>
#include<string.h>
int main()
{
 int n,i,count=0,a;
 char str[20];
 scanf("%s",&str);
 a=strlen(str);
 for(i=0;i<=a;i++)
 {
     if(a[i]==' ')
     {
     count++;
     }
      printf("%d",count);
 }
}
