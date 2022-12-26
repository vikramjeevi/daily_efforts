#include<stdio.h>
int main()
{
    int a[10],dec,i=0;
    scanf("%d",&dec);
    while(dec>0)
    {
        a[i]=dec%2;
        dec=dec/2;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
