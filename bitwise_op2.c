#include<stdio.h>
int swap(int n,int p1,int p2)
{
    int bit1=(n>>p1)&1;
    //printf("%d\n",bit1);
    int bit2=(n>>p2)&1;
    //printf("%d\n",bit2);
    int x=(bit1^bit2);
    //printf("%d\n",x);
    x=(x<<p1)|(x<<p2);
    //printf("%d\n",x);
    return (n^x);
}
int main()
{
    int n=0x75;
    int r=swap(n,1,4);
    printf("0x%x",r);
}
