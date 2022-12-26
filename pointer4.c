
#include<stdio.h>
int main()
{
    char str[]="VIKRAM";
    char str1[10];
    char *strp=str;
    char *str1p=str1;
    int i=-1;
    while(*strp)
    {
        strp++;
        i++;
    }
    while(i>=0)
    {
        strp--;
        *str1p=*strp;
        str1p++;
        --i;
    }
    *str1p='\0';
    printf("%s",str1);
}
