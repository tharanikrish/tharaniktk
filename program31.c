#include<stdio.h>
#include<string.h>
int main()
{
int count_char=0;
char str[26];
printf("\n Enter the string:");
  gets(str);
  for(i=0;str[i]=!NULL;i++)
  {
    count_char++;
  }
  printf("\nNumber of characters in string:",count_char);
return 0;
  }
  
  
  
