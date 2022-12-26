#include<stdio.h>
int main()
{
    int n,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    printf("enter : ");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n>=500)
        {
           n500=n/500;
           n=n%500;
           printf("500=%d\n",n500);
        }
        else if(n>=200)
        {
           n200=n/200;
           n=n%200;
           printf("200=%d\n",n200);
        }
        else if(n>=100)
        {
           n100=n/100;
           n=n%100;
           printf("100=%d\n",n100);
        }
        else if(n>=50)
        {
           n50=n/50;
           n=n%50;
           printf("50=%d\n",n50);
        }
        else if(n>=20)
        {
           n20=n/20;
           n=n%20;
           printf("20=%d\n",n20);
        }
        else if(n>=10)
        {
           n10=n/10;
           n=n%10;
           printf("10=%d\n",n10);
        }
        else if(n>=5)
        {
           n5=n/5;
           n=n%5;
           printf("5=%d\n",n5);
        }
        else if(n>=2)
        {
           n2=n/2;
           n=n%2;
           printf("2=%d\n",n2);
        }
        else if(n>=1)
        {
           n1=n/1;
           n=n%1;
           printf("1=%d\n",n1);
        }
    }
}
