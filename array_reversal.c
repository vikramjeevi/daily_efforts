#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int *ptr=&a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(ptr+i));
    }
}
