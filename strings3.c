#include<stdio.h>
int main()
{
    char *ptr;
    int vowels=0,conso=0;
    char str[100];
    printf("Enter the word : ");
    gets(str);
    ptr=&str;
    for(int i=0; i<strlen(str); i++)
    {
        if(*ptr>='a'&&*ptr<='z'||*ptr>='A'||*ptr<='Z')
        {
            if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
                vowels++;
            else
                conso++;

            }
        ptr++;
    }
    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d\n",conso);

}
