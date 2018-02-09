#include<stdio.h>
int main()
{
int i,len,line=0;
char str[100];
printf("\n Enter the string:");
  scanf("%[\t\n]s",&str);
  len=strlen(str);
  for(i=0;i<=len;i++)
  {
    if(str[i]>='0' && str[i]<='9')
      line++;
  }
  printf("\nNumber of numeric characters:%d",line);
return 0;
  }
