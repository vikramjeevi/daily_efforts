#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i]%2;
        c[n-1-i]=b[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",c[i]);
    }
    printf("\n");
    int count=0;
    for(int j=0;j<n;j++)
    {
       if(b[j]!=c[j])
            count++;
    }
    if(count==0)
        printf("1");
    else
        printf("0");

}
