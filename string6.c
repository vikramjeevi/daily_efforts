#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int sx,ex;
    sx=0;
    ex=strlen(str)-1;
    while(sx<=ex)
    {
        if(str[sx]!=str[ex])
            break;
        sx++;
        ex--;
    }
    if(sx>=ex)
        printf("Palindrome");
    else
        printf("NOT");
}
