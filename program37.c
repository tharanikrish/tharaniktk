#include<stdio.h>
int main()
{
int a,b,temp;
printf("\nEnter the numbers:");
scanf("%d%d",&a,&b);
printf("\nBefore swapping:%d %d",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter swapping:%d %d",a,b);
return 0;
}
