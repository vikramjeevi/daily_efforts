#include<stdio.h>
int main()
{
    int n=5;
    int a=0,b=n-1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
             {
               printf("*");
             }
             else
                printf(" ");


        }

        printf("\n");
    }
}
