#include<stdio.h>
int main ()
{
    int a,b,c,d,e,f;
    printf("\nenter the first time");
    scanf("%d%d",&a,&b);
    printf("\nenter the second time");
    scanf("%d%d",&c,&d);
    e=a-c;
    f=b-d;
    printf("the time is:%d %d",e,f);
    return 0;
}
