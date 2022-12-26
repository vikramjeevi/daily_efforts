#include<stdio.h>
int main()
{
    int bin,rem,i=1,dec,sum=0;
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        dec=rem*i;
        sum=sum+dec;
        i=i*2;
        bin=bin/10;
    }
    printf("DEC = %d",sum);
}
