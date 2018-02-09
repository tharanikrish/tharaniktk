#include<stdio.h>
int main()
{
int count_char=0,i;
char str[100];
printf("\n Enter the string:");
  scanf("[^\n]s",&str);
  for(i=0;str[i];i++)
  {
    if(str[i]=='.')
      count_char++;
  }
  printf("\nNumber of lines:%d",count_char);
return 0;
  }
