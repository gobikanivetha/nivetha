#include<stdio.h>
int main()
{
    int num,a,b,c,d;
    printf("\n Enter the number");
    scanf("%d",&num);
    a=num/10;
    b=num%10;
    c=b/10;
    d=b%10;
    printf("\n the digits are...%d %d %d");
    return 0;
}
  
