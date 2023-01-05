#include<stdio.h>
struct bank
{
    char name[20];
    int acc;
    int bal;
};
void check(struct bank [],int );
int main()
{
    int n;
    printf("Enter the no. of customers ; ");
    scanf("%d",&n);
    struct bank b[n];
    printf("-----------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the customer details no.%d\n",i+1);
        printf("-----------------------------------------\n");
        printf("Enter account no. :\t");
        scanf("%d",&b[i].acc);
        printf("Enter name :\t");
        scanf("%s",b[i].name);
        printf("Enter balance :\t");
        scanf("%d",&b[i].bal);
        printf("-----------------------------------------\n");

    }
        check(b,n);
}
void check(struct bank b[],int n)
{

    printf("\n\n customer whose balance below 100\n\n");
    for(int i=0;i<n;i++)
    {

        if(b[i].bal<100)
        {
        printf("-----------------------------------------\n");
        printf("Account no. : %d\n",b[i].acc);

        printf("Name : %s\n",b[i].name);

        printf("Balance : %d\n",b[i].bal);

        }

    }
}
