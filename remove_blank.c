#include<stdio.h>
int main()
{
    char str[30];
    gets(str);
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            str[count]=str[i];
            count++;
        }
        i++;

    }
    str[count]='\0';
    puts(str);
}

