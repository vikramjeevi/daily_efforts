#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i=0;
    printf("\n\n");
    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z'))
            printf("%c",str[i]);
        i++;
    }
}
