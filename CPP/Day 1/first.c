#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter value");
    
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
      scanf("%d",&a[i]);
        }
   for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
      printf(" %d\t",a[i]);
        }
}