#include<stdio.h>
int pft(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("-----------\n");
    for(int i=1;i<=num;i++)
    {

    if(i==pft(i))
        printf("%d\n",i);
    }
}
