#include<stdio.h>
#include<string.h>
int main()
{
int count_char=0,i;
char str[26];
printf("\n Enter the string:");
gets(str);
  for(i=0;str[i]=!NULL;i++)
  {
    if((str[i]==' ')&&(str[i]=='\0'))
      count_char++;
  }
  printf("\nNumber of words in string:%d",count_char+1);
return 0;
  }
  
