#include<stdio.h>
int main()
{
  int a,b,c,s;
  printf("\n Enter the first number");
  scanf("%d",&a);
  printf("\n Enter the second number");
  scanf("%d",&b);
  c=a+b;
  s=c%2;
  if(s==0)
  {
     printf(" the number is even");
  }
  else
  {
    printf("the number is odd");
  }
  return 0;
}
