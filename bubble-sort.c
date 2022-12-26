#include<stdio.h>
int bubblesort(int arr[],int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }
    print(arr,x);
}
int print(int arr[],int y)
{
    for(int i=0;i<y;i++)
    {
        printf("%d ",&arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
}
