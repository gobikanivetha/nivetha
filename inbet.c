#include<stdio.h>
void main()
{ 
 int i,j temp=0;
 printf("\n Enter the value of n..");
 scanf("%d",&n);
 printf("\n the elements are..");
 for(i=0;i<=5;i++)
 {
  scanf("%d",a[i]);
  }
   for(j=i+1;j<n;j++)
   {
    scanf("%d",q[j]);
   }
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
    }
