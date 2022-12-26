#include<stdio.h>
float avg(int [], int);
int main()
{
    int e;
    printf("Enter the size; ");
    scanf("%d",&e);
    int n[e];
    for(int i=0;i<e;i++)
    {
        scanf("%d",&n[i]);
    }
    float s=avg(n,e);
    printf("%.2f",s);
}
float avg(int a[],int x)
{
    int b=0;
    for(int i=0;i<x;i++)
    {
        b=b+a[i];
    }
    float c=b/x;
    return c;
}
