#include<stdio.h>
int* bubsort(int a[],int n)
{
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
        return a;
}
int main()
{
    int n;
    printf("enter the size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=bubsort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}
