#include<stdio.h>
 int main()
{
 int a[50],i,large,small,n;
 printf("\n Enter the array of numbers");
 scanf("%d",&n);;
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 large=small=a[0];
 for(i=1;i<n;i++)
 {
  if(a[i]>large)
  large=a[i];
  if(a[i]<small)
  small=a[i];
  }
  printf("%d", large);
  printf("%d\t",small);
  return 0;
  }
  
