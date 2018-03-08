#include<stdio.h>
int main()
{
  char s1[20];
  int i, flag=0,n;
  printf("\n  Enter the string");
  for(i=0;i<=n;i++)
  scanf("%s",&s1);
  if( s1=='a' || s1=='e' || s1=='i' || s1=='o' || s1=='u')
  {
    flag=1;
  }
  else
  {
    flag=0;
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
