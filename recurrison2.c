//factorial
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
    if(n==1)
        return 1;
    else
        return n*fun(n-1);
}

