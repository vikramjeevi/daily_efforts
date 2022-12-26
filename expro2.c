//reverse numbers in an array
#include<stdio.h>
void rev(int[],int);
int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter numbers : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered numbers are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    rev(arr,n);
}
void rev(int a[],int x)
{


    for(int i=0;i<x;i++)
    {
        int rem,rev=0;
        while(a[i]!=0)
        {
        rem=a[i]%10;
        rev=rem+rev*10;
        a[i]=a[i]/10;
        }
        a[i]=rev;
        //printf("%d\t",a[i]);
    }
    printf("the reverse numbers are : ");
    for(int i=0;i<x;i++)
    {
        printf("%d\t",a[i]);
    }
}
