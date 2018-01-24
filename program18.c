#include <stdio.h>
int main()
{
	int a,b,i,t,n,rem;
	scanf("%d%d",&a,&b);
	printf("inputs %d %d \n",a,b);
	for(i=a+1;i<b;i++)
	{
	t=i;
	n=0;
	while(t!=0)
	{
	rem=t%10;
	n=n+rem*rem*rem;
	t=t/10;
	}
	if(i==n)
	printf("output %d",i);
	}		
	return 0;
}
