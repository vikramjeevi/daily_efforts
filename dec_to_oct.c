#include<stdio.h>
int main()
{
    int a[10],dec,i=0;
    scanf("%d",&dec);
    while(dec>0)
    {
        a[i]=dec%8;
        dec=dec/8;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}

