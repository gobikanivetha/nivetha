#include<stdio.h>
int main()
{
  int n,i;
  char s[10];
  scanf("%s",&s);
  printf("\n Enter the number");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    printf("%c", s);
  }
  return 0;
}
