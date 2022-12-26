#include<stdio.h>
int main()
{
    char str[100];
    int n,m;
    gets(str);
    printf("Enter the extract position : ");
    scanf("%d",&n);
    printf("Enter the length : ");
    scanf("%d",&m);
    int i=0;
    printf("\n");
    printf("The substring retrieve from the string is : ");
    while(str[i]!='\0')
    {
       if(i>=n-1 && i<=n+m-1)
            putchar(str[i]);

        i++;
    }
}
