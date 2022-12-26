//finding the length of string
#include<stdio.h>
int length(char []);
int main()
{
    char c[]="helloworld";
    printf("%d\n",strlen(c));
    int n=length(c);
    printf("%d",n);
}
int length(char c[])
{
    int y=0;
    for(int i=0;c[i]!='\0';i++)
    {
        y++;
    }
    return y;
}
