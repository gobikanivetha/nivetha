#include<stdio.h>
int main()
{
  int n,i,flag=0;
  printf("\n Enter the positive integer");
  scanf("%d",&n);
  for(i=2;i<=n/2;++i)
  {
    flag=1;
    break;
  }
  if(flag==0)
  {
    printf("It is a prime number");
  }
  else
  {
    printf(" It is not a prime number");
  }
}
