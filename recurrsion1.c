#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=fun(n);
    printf("%d",s);
}
int fun(int n)
{
    if(n==0)
        return 1;
    else
        return 1+fun(n-1);
}
