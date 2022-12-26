#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n\n");
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<i; k++)
        {

            printf(" ");


        }

        printf("*");
        for(int l=n-1; l>i; l--)
        {

            printf(" ");


        }
        for(int j=n-1; j>i+1; j--)
        {

            printf(" ");



        }
        if(i!=n-1)
          printf("*");

        //end1
        for(int k=0; k<i; k++)
        {

            printf(" ");


        }
        for(int k=1; k<i; k++)
        {

            printf(" ");


        }
        if(i!=0)
          printf("*");
        for(int l=n-1; l>i; l--)
        {

            printf(" ");


        }
        for(int j=n-1; j>i+1; j--)
        {

            printf(" ");



        }
        if(i!=n-1)
          printf("*");
        //end2
        for(int k=0; k<i; k++)
        {

            printf(" ");


        }
        for(int k=1; k<i; k++)
        {

            printf(" ");


        }
        if(i!=0)
          printf("*");
        for(int l=n-1; l>i; l--)
        {

            printf(" ");


        }
        for(int j=n-1; j>i+1; j--)
        {

            printf(" ");



        }
       if(i!=n-1)
          printf("*");

       //end3

       for(int k=0; k<i; k++)
        {

            printf(" ");


        }
        for(int k=1; k<i; k++)
        {

            printf(" ");


        }
        if(i!=0)
          printf("*");
        for(int l=n-1; l>i; l--)
        {

            printf(" ");


        }
        for(int j=n-1; j>i+1; j--)
        {

            printf(" ");



        }
        if(i!=n-1)
          printf("*");

        printf("\n");
    }

}
