
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n ,*ptr;
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("EMPTY");
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
