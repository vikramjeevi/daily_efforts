#include<stdio.h>
int main()
{
    char a[100],ch;
    gets(a);
    printf("\n");

    for(char ch='a'; ch<='z'; ch++)
    {
        int i=0,c=0;
        while(a[i]!='\0')
        {
            if(ch==a[i])
                c++;
            i++;
        }
        printf(" %c --- %d times",ch,c);
        printf("\n");
    }
}

