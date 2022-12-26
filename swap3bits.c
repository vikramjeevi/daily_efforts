#include<stdio.h>
void dectobin(int num)
{
    int rem;
    int arr[8],i=0;
    while(num!=0)
    {
        rem=num%2;
        arr[i]=rem;
        num=num/2;
        i++;
    }
    for(i=7;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int n=195,a,b,c;
    printf("before swap : ");
    dectobin(n);
    a=(n&0x07)<<5;
    b=(n&0xE0)>>5;
    c=a|b;
    printf("after swap  : ");
    dectobin(c);
    //printf("\n%d",c);
}
