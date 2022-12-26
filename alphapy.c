#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
          int ch='a';

        for(int k=n-1; k>=i; k--)
          {
              printf(" ");
          }
        for(int j=0;j<=i;j++)
        {
            printf("%c",ch+j);
        }
        for(int k=i;k>=1;k--)
        {
            printf("%c",ch+k-1);
        }
        printf("\n");
    }
}
