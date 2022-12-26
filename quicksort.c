#include<stdio.h>
int quick_sort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=part(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
    }

}
int part(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int t=a[start];
            a[start]=a[end];
            a[end]=t;
        }
    }
    int te=a[lb];
    a[lb]=a[end];
    a[end]=te;

    return end;

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
}
