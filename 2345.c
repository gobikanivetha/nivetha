#include<stdio.h>
int main()
{
  int n,h;
  scanf("%d",&n);
  while(n>0)
  {
    h=n%2;
    if(h%2!=0)
    {
      printf("%d",h);
    }
    n=n/2;
  }
  return 0;
}
