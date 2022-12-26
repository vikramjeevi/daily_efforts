#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=i; j--)
            printf(" ");
        for(int l=0; l<20; l++)
            printf(" ");
        for(int k=1; k<=i; k++)
        {
            if(k%4==1)
                printf("  ");
            else
              printf("* ");
        }
        printf("\n");
    }
}
