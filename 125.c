#include<stdio.h>
int main()
{
  int n,i;
  printf("\n Enter the number");
  scanf("%d",&n);
  printf("The factors of  are..%d",n);
  for(i=2;i<n;i++)
  {
  if(n%i==0)
  {
    printf("composite number");
    return 0;
  }
  else
  {
    printf(" not a composite number");
  }
  }
  return 0;
}
