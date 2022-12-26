#include<stdio.h>
int count(void(*p)(int))
{
    for(int i=0;i<10;i++)
    {
        p(i);
    }
}
int print(int num)
{
    printf("%d\n",num+1);
}
int main()
{
    void (*p)(int);
    count(print);
}
