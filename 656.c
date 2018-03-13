#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int n,a;
  scanf("%d",&str);
  n=strlen(str);
  a=n/2;
  str[a]="*";
  printf("%c",str);
}
