#include <stdio.h>
int main()
{
    int a,b,c,result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &a);

    b=a;

    while (b!= 0)
    {
        c= b%10;
        result += c*c*c;
        b/= 10;
    }

    if(result==a)
        printf("yes");
    else
        printf("no");
    return 0;
    }
