#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("------------------\n");
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count==1)
        {
            printf("%d ",arr[i]);
            count=0;
        }
        else
            count=0;
    }
}
