#include<stdio.h>
int main()
{
    char str[20];
    int i=0,c=0;
    gets(str);
    while(str[i]!='\0')
    {
        c++;
    }
    for(int j=c;j>=0;j--)
    {
        printf("%c",str[j]);
    }
}
