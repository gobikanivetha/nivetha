#include<stdio.h>
int main()
{
  int n,m;
  printf("\n Enter the number");
  scanf("%d",n);
  m=n%7;
  if(m=0)
  {
     printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
