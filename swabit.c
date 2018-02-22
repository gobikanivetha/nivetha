#include<stdio.h>
int main()
{
  int a,b,temp=0;
  printf("\n Enter the value of a");
  scanf("%d",&a);
  printf("\n Enter the value of b");
  scanf("%d",&b);
  printf(" Before swapping");
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n After swapping a=%d b=%d", a,b);
  return 0;
}
