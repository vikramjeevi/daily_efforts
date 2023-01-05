#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,65,6,7,7};
    int *p=&a;
    for(int i=0;i<sizeof(a)/sizeof(int);i++)
    {
        printf("%d ",*p);
        p++;
    }
}
