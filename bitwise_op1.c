#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=(n>0)-(n<0);
    if(s==1)
        printf("+ve");
    else if(s==-1)
        printf("-ve");
}
