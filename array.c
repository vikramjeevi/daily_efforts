#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter size of 1st array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of 2nd array : ");
    scanf("%d",&m);
    int b[m];
    printf("enter elements : ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int v=n;
    for(int i=0;i<m;i++)
    {
        a[n+i]=b[i];
        v++;
    }

    for(int i=0;i<v;i++)
    {
        for(int j=i+1;j<v;j++)
        {
            if(a[j]<a[i])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    for(int i=0;i<v;i++)
    {
        printf("%d\t",a[i]);
    }
}
