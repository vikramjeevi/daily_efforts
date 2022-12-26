#include<stdio.h>
int maxdiff(int a[],int n,int k)
{
    int si=0,sj=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",a[i]);
        si+=a[i];
    }
    printf("\n");
    for(int j=n-1;j>=n-k;j--)
    {
        printf("%d ",a[j]);
        sj+=a[j];
    }
    printf("\n");
    if(si>sj)
        printf("diff = %d",(si-sj));
    else
        printf("diff = %d",(sj-si));

}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    maxdiff(a,n,k);
}
