#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int *ptr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    for(int i=0;i<n;i++)
    {

        printf("%d %x\n",*(arr+i),arr+i);
    }
}
