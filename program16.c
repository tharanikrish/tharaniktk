#include<stdio.h>
int main()
{
int a,b,c,i,flag=0;
printf("enter the numbers:\n");
scanf("%d%d",&a,&b);
while(a<b)
{
for(i=2;i<=b;++i)
{
if(a%i==0)
{
flag=1;
break;
}}}
if(flag==0)
{
c=i;
printf("%d ",c);
}}
