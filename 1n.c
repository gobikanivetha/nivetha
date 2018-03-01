#include<stdio.h>
#include<string.h>
int main()
{
  int flag=0,b,i;
  char a[20];
  scanf("%s",&a);
  b=strlen(a);
  for(i=0;i<=b;i++)
  {
    if(a[i]=='o'||a[i]=='1')
    {
      flag=1;
    }
    else
    {
      flag=0;
      break;
    }
    if(flag==1)
    {
      printf("yes");
    }
    else
    {
      printf("no");
    }
    return 0;
  }
  
