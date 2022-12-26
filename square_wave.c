#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
            printf("* ");
            if(i!=n-1){
            for(int j=0; j<n; j++)
            {
                if(j!=n-1)
                    printf("  ");

            }
                    printf("* ");
            }
            else
            {
                for(int k=0; k<n; k++)
                    printf("* ");
            }
            if(i==0)
            {
                for(int k=0; k<n; k++)
                    printf("* ");

            }
            else{
            for(int j=0; j<=n; j++)
            {
                if(j!=n-1)
                    printf("  ");

            }
           }


        //end1

            printf("* ");
            if(i!=n-1){
            for(int j=0; j<n; j++)
            {
                if(j!=n-1)
                    printf("  ");

            }
                    printf("* ");
            }
            else
            {
                for(int k=0; k<n; k++)
                    printf("* ");
            }
            if(i==0)
            {
                for(int k=0; k<n; k++)
                    printf("* ");

            }
            else{
            for(int j=0; j<=n; j++)
            {
                if(j!=n-1)
                    printf("  ");

            }
           }

        printf("\n");


    }






}
