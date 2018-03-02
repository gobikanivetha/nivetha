#include<stdio.h>
int main()
{
   int a,b,c;
    printf("\n Enter the value of a");
    scanf("%d",&a);
    printf("\n Enter the value of b");
    scanf("%d",&b);
    c=a-b;
    if(c%2==0)
    {
      printf("\n even");
    }
    else
    {
      printf("\n odd");
    }
    return 0;
}
