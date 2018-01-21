#include<stdio.h>
int main()
{
int n,reversed_integer=0,remainder,original_integer;
printf("enter a number: %d,n);
scanf("%d,&n);
original_integer=n;
while(n!=0)
{
remainder=n%10;
reversed_integer=reversed_integer*10+remainder;
n/=10;
}
if(original_integer==reversed_integer)
{
printf("the number is palindrome\n");}
else
printf("the number is not a palindrome");
}
