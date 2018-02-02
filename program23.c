#include<stdio.h>
int main()
{
int i,n,a[n],min;
printf("\n Enter the number:");
scanf("%d",&n);
printf("\nEnter the array of numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
  min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>min)
{
break;
}
else
min=a[i];
}
printf("%d is minimum",min);
return 0;
}
