#include<stdio.h>
int main()
{
int a,b,fact=1;
printf("enter the number: \n");
scanf("%d",&b);
for(a=1;a<=b;a++)
{
fact=fact*a;
}
printf("%d",fact);
return 0;
}
