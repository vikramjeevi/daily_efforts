#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the position(0th included) : ");
    scanf("%d",&x);
    int m=(1<<x)^n;
    printf("%d",m);
}
