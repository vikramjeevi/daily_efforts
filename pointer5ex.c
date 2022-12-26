#include<stdio.h>
void update(int *a,int *b)
{
    int k=*a,l=*b;
    *a=k+l;
    *b=k>l?k-l:l-k;
}
int main()
{
    int a,b;
    int *pa=&a, *pb=&b;
    scanf("%d%d",&a,&b);
    update(pa,pb);
    printf("%d %d",a,b);
}
