#include<stdio.h>
 int main()
{
 int a[70],s,i,avg,n;
 printf("\n Enter total no of elements");
 scanf("%d",&n);
 printf("\n The elements are..");
 for(i=0;i<=n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<=n;i++)
 {
  s=s+a[i];
  }
  avg=s/n;
  printf("\n Average is %d",avg);
  return 0;
  }
