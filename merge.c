#include<stdio.h>
main()
{
 int n,b[100],i,j;
 printf("\n Enter a number");
 scanf("%&d",&n);
 for(i=0;i<=n;i++)
 {
  scanf("%d",&b[i]);
  }
  for(j=i+1;j<n;j++)
  {
   scanf("%d",&b[j]);
   }
   if(b[i]>b[j])
   {
    b[i]=temp;
    temp=b[i];
    b[i]=b[j];
    }
    printf("%d",b[j]);
    }
