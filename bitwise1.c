
#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("enter the bit position : ");
    scanf("%d",&x);
    clearbit(n,x);
    setbit(n,x);
    togglebit(n,x);
}
void clearbit(int n, int x)
{
    int c=n&~(1<<x-1);
    printf("clear bit result = %d\n",c);
}
void setbit(int n, int x)
{
    int s=n|(1<<x-1);
    printf("set bit result = %d\n",s);
}
void togglebit(int n, int x)
{
    int t=n^(1<<x-1);
    printf("toggle bit result = %d\n",t);
}
