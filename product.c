#include<stdio.h>
int main()
{
  int n,m,a,r;
  printf("\n Enter the two nmbers");
  scanf("%d",&n,&m);
  a=n*m;
  printf("product is...%d", a);
  r=a/2;
  if(r==0)
  {
    printf(" the number is even"); 
  }
  else
  {
    printf("the number is odd");
  }
  return 0;
}
