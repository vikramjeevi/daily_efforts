#include<stdio.h>
int multiply(int a, int b)
{
    if(b==0)
        return 0;
    else if(b>0)
        return (a+multiply(a,b-1));
    else
        return -multiply(a,-b);
}
int main()
{
    int n1=5,n2=-3;
    printf("%d",multiply(n1,n2));
}
