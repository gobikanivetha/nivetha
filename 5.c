#include<stdio.h>
int main()
{
  int n,a,b,c,d,sum;
  printf("\n Enter the number");
  scanf("%d",&n);
  a=n/10;
  b=n%10;
  c=b/10;
  d=b%10;
  sum=a+c+d;
  printf("\n The sum of the digits is...%d" , sum);
  return 0;
}
