#include<stdio.h>
int main()
{
    int n,s=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        s=10*s+9;
        printf("%d ",s);
        sum=sum+s;
    }
    printf("\n THE SUM = %d",sum);
}
