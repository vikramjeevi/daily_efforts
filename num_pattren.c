#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        for(int k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%c ",97+j);
        }
        printf("\n");
    }
}
