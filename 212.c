#include<stdio.h>
int main()
{
  int a,b,c,i,n;
  printf("\n Enter two numbers");
  scanf("%d %d",&a,&b);
  c=a*b;
  for(i=2;i<=c;i++)
  {
    if(c==i*i)
    {
      printf("\n perfect square");
      break;
    }
    else
    {
      printf("no");
      break;
    }
  }
  return 0;
}
