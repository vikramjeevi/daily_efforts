#include<stdio.h>
void bubblesort(int *a, int n)//(int a[], int n)
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
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
}
