#include<stdio.h>
int main()
{
    char str[100];
    char r,b;
    printf("enter the string: ");
    gets(str);
    printf("enter the character to replace : ");
    r=getchar();
    getchar();
    printf("enter the replacing character : ");
    b=getchar();
    char *ptr=&str;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==r)
        {
            str[i]=b;
        }
        else
            continue;
    }
    printf("The modified string is :%s",str);
}
