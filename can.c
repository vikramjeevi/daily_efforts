#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the message ID 1 : ");
    scanf("%x",&n);
    printf("Enter the message ID 2 : ");
    scanf("%x",&m);
    int a=n,b=m;
    printf("----------------\n");
    for(int i=10;i>=0;i--)
    {
         //printf("0x%x  0x%x\n",(n>>i)&1,(m>>i)&1);
         if(((n>>i)&1==0 && (m>>i)&1==0) || ((n>>i)&1==1 && (m>>i)&1==1))
            continue;
         if((n>>i)&1==1 || (m>>i)&1==0)
         {printf("message id 2 (0x%x) wins the arbitration",b);
         break;}
         else if((n>>i)&1==0 || (m>>i)&1==1)
         {printf("message id 1 (0x%x) wins the arbitration",a);
         break;}

    }
    printf("\n");
}
