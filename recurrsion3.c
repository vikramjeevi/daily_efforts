#include<stdio.h>
int main()
{
    int n;
    char name[100];
    printf("Enter name : ");
    gets(name);
    printf("Enter size : ");
    scanf("%d",&n);
    fun(name,n);
    //printf("%d",s);
}
int fun(char name[],int n)
{
    if(n==0)
        return 1;
    else
        printf("%s\n",name,1+fun(name,n-1));
        //1+fun(n-1);
}

