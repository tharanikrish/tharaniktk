#include<stdio.h>
int main()
{
int i,n,a[n],max;
printf("\n Enter the number:");
scanf("%d",&n);
printf("\nEnter the array of numbers:);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(max>a[i])
{
break;
}
else
max=a[i];
}
printf("\n %d is maximum",max);
return 0;
}
