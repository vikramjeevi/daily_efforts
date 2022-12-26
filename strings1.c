#include<stdio.h>
int main()
{
    char c[]="vikram";
    int i=0;
    while(c[i]!='\0')
    {
        printf("%c",c[i]);
        i++;
    }
    c[4]='g';
    printf("\n%s",c);
}
