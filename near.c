#include<stdio.h>
int main()
{
  int m,n;
  scanf("%d",&m);
  n=m+1;
  while(n!=0)
  {
    if(n%10==0)
    {
      printf("%d",n);
      break;
    }
    n++;
  }
  return 0;
}
