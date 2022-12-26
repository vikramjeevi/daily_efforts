#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",n-j);
        }
        for(int k=n-1;k>i;k--)
        {
            printf("%d ",n-i);
        }
        for(int l=n-1;l>i;l--)
        {
            printf("%d ",n-i);
        }
        for(int m=i;m>=1;m--)
        {
            printf("%d ",n-m+1);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>1;j--)
        {
            int a=n;
            printf("%d ",j);
        }
//        for(int k=n-1;k>i;k--)
//        {
//            printf("%d ",n-i);
//        }
//        for(int l=n-1;l>i;l--)
//        {
//            printf("%d ",n-i);
//        }
//        for(int m=i;m>=1;m--)
//        {
//            printf("%d ",n-m+1);
//        }
        printf("\n");
    }
}
