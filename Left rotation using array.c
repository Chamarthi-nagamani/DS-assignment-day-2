
#include <stdio.h>

int main()
{
  int a[50],i,k,n,j,temp;
  printf("enter size: ");
  scanf("%d",&n);
  printf("enter the elements: ");
  for(i=0; i<n; i++)
  {
      scanf("%d",&a[i]);
  }
   printf("how many rotatons towards left: ");
   scanf("%d",&k);
 for(j=0; j<k; j++)
 { 
   temp = a[0];
   for(i=0; i<n-1; i++)
   {
       a[i] = a[i+1];
   }
   a[i]=temp;
 }
   
   for(i=0; i<n; i++)
   {
       printf("%d ",a[i]);
   }
}
