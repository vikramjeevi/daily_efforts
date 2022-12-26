//returning as a pointer
#include<stdio.h>
int* large(int* ,int*);

int main()
{
    int a,b;
    int *p;
    scanf("%d%d",&a,&b);
    p=large(&a,&b);
    printf("LARGE=%d",*p);
}
int *large(int *x, int *y)
{

    if((*x)>(*y))
        return x;
    else
        return y;
}
