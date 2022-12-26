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
    int n=i;
//    for(i=i-1;i>=0;i--)
//    {
//        printf("%d",a[i]);
//    }
    printf("\n");
   printf("After clearing highest bit : ");
    for(int j=n-1;j>=0;j--)
    {
        a[n-1]=0;
        printf("%d",a[j]);
    }

    printf("\n");
   printf("After setting highest bit : ");
    for(int j=n-1;j>=0;j--)
    {
        a[n-1]=1;
        printf("%d",a[j]);
    }
}

