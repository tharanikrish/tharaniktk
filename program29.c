#include<stdio.h>
int main()
{
int min,hour,minute;
printf("\n enter a minute:");
scanf("%d",&min);
hour=min/60;
minute=min%60;
printf("\n in hour and minute: %d : %d",hour,minute);
return 0;
}
