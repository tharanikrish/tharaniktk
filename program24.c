#include<stdio.h>
int main()
{
int i,j,n,a[n],sort;
printf("\n Enter the number:");
scanf("%d",&n);
printf("\n enter the array of numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
sort=a[i];
a[i]=a[j];
a[j]=sort;
}}}
  printf("\nsorted array:");
  for(i=0;i<n;i++)
  {
printf("\n%d",sort);
  }
  return 0;
}
