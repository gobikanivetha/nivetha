#include<stdio.h>
int main()
{
  int n,count=0;
  printf("\n ENTER THE NUMBER");
  scanf("%d",&n);
  while(n!=0)
  {
    n=n/10;
    count++;
  }
  printf("the digits in the number is..%d",count);
  return 0; 
}
