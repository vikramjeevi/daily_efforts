#include<stdio.h>
int main()
{
    int bin,rem,dec,i=1,sum=0,a[10],j=0;
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        dec=rem*i;
        i=i*2;
        bin=bin/10;
        sum=sum+dec;
    }
    //printf("Dec = %d\n",sum);
    while(sum!=0)
    {
        a[j]=sum%8;
        sum=sum/8;
        j++;
    }
    printf("OCT=");
    for(j=j-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}
