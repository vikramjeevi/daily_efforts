#include<stdio.h>
int main()
{
    int n=16,i;
    int num,a[n];
    scanf("%d",&num);
    printf("dec : %d\n",num);
    i=n-1;
    while(i>=0)
    {
        a[i]=num&1;
        num=num>>1;
        i--;
    }
    for(int j=0;j<16;j++)
    {
        printf("%d",a[j]);
    }
}
