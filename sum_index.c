//Write a C program to get the indices of the two numbers of a given array of integers,
//such that the sum of the two numbers equal to a specific target.
//Expected Output:
//
//Original Array: 4  2  1  5
//Target Value: 7
//Indices of the two numbers whose sum equal to target value: 7
//1 3
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nOriginal Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int m;
    printf("Target Value: ");
    scanf("%d",&m);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==m)
                printf("\nIndices of the two numbers whose sum equal to target value: %d %d\n",i,j);
        }
    }
}
