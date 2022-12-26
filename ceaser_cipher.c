#include<stdio.h>
int main()
{
    char str[100];
    printf("enter string : ");
    gets(str);
    char *ptr=str;
    while(*ptr!='\0')
    {
        if((*ptr)>='a'&&(*ptr)<='z')
        {
            (*ptr=='z')?(*ptr='a'+2):(*ptr=='y')?(*ptr='a'+1):(*ptr=='x')?(*ptr='a'):(*ptr=*ptr+3);

        }
        else if((*ptr)>='A'&&(*ptr)<='Z')
        {
            (*ptr=='Z')?(*ptr='A'+2):(*ptr=='Y')?(*ptr='A'+1):(*ptr=='X')?(*ptr='A'):(*ptr=*ptr+3);
        }
        ptr++;
    }
    printf("Encrypted text : ");
    puts(str);
}
