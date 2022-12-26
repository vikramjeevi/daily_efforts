#include<stdio.h>
int main()
{
    int n;
    printf("Enter size; ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=n;j>i;j--)
            printf(" ");
        for(int k=0;k<i;k++)
            printf(" *");
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
            printf(" ");
        for(int k=n;k>i;k--)
            printf(" *");
        printf("\n");
    }
//    for(int j=0;j<n/2;j++)
//    {
//        for(int k=0;k<=(n/2)+1;k++)
//            printf(" ");
//        printf("    * *\n");
//    }
}
