#include<stdio.h>
#include<string.h>
int main()
{
char str[30];
int l,i,count=0;
printf("\nEnter the string:");
scanf("%s",&str);
l=strlen(str);
for(i=0;i<l;i++)
{
if((str[i]>=33)&&(str[i]<=47)||(str[i]>=58)&&(str[i]<=64)||(str[i]>=91)&&(str[i]<=96)||(str[i]>=123)&&(str[i]<=127))
{
count++;
}}
printf("\nnumber of special characters:%d",count);
return 0;
}
