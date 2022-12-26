#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        printf("*");
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
        for(int k=1;k<i;k++)
        {
            printf(" ");
        }
        if(i!=0)
            printf("*");
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");
        }
        printf("*");
        for(int j=n-2;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=n-3;j>=i;j--)
        {
            printf(" ");
        }
        if(i!=n-1)
           printf("*");
        printf("\n");
    }
}
