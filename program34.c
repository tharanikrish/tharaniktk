#include<stdio.h>
int main()
{
int i,len,line=0;
char str[100];
printf("\n Enter the string:");
  scanf("%[\n]s",&str);
  len=strlen(a);
  for(i=0;i<len;i++)
  {
    if(str[i]=='.')
      line=line+1;
  }
  printf("\nNumber of lines:%d",line);
return 0;
  }
