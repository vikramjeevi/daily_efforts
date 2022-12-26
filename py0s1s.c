
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>=i; j--)
          {
              printf(" ");
          }
        for(int j=0;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                    printf("1 ");
                else
                    printf("0 ");
            }

            else
            {
                if(j%2==1)
                    printf("1 ");
                else
                    printf("0 ");
            }
        }
        printf("\n");
    }
}
