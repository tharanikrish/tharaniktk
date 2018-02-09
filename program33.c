#include<stdio.h>
#include<string.h>
int main()
{
int count_char=0,i;
char str[26];
printf("\n Enter the string:");
gets(str);
  for(i=0;str[i];i++)
  {
    if(str[i]=='\t')
      count_char++;
  }
  printf("\nNumber of spaces:",count_char);
return 0;
  }
  
