#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *ptr,n,s=0;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter array elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        s+=*(ptr+i);
    }
    printf("sum = %d",s);
    free(ptr);
}
