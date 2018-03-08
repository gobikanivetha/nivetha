#include<stdio.h>
#include<string.h>
int main()
{
  char str[30],rev,a;
  printf("\n Enter the string");
  scanf("%s",&str);
  printf("\n string is..%s",str);
  printf("\n reverse string..%s",strrev(str));
  return 0;
}
