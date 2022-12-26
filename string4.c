
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    char *str1[n];

    for(int i=0;i<n;i++)
    {
        scanf("%s",&str1[i]);
        char s[100];
        strcpy(s,str1[i]);
        strfun(s);
    }
}
void strfun(char str[])
{
    char *ptr;
    int vowels=0,conso=0;
    //char str[100];
//    printf("Enter the word : ");
//    gets(str);
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
