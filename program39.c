#include<stdio.h>
int main()
{
int i,temp,a[10];
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
printf("\nmaximum number is %d",a[i]);
return 0;
}
