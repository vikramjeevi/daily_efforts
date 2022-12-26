#include<stdio.h>
int main()

{
    char str[100];
    gets(str);
    int con=0,vow=0;
    char *ptr=str;
    while(*ptr!='\0')
    {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
            vow++;
        else
            con++;
        ptr++;
    }
    printf("Vowels = %d\n Consonants = %d",vow,con);
}
