#include<stdio.h>
int main()
{
    int a[5]={5,8,2,9,4};
    int *s;
    s=&a[0];
    for(int i=0;i<5;i++)
    {
        if(*s>a[i])
            s=&a[i];
        else
            continue;
    }
    printf("%d",*s);
}
