#include<stdio.h>
int main()
{
int i,n,a[n],min;
printf("\n Enter the number");
scanf("%d",&n);
printf("\nEnter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
a[0]=min;
for(i=1;i<n;i++)
{
if(a[i]>min)
{
break;
}
else
min=a[i];
}
printf("%d is minimum",&min);
}
