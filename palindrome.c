#include<stdio.h>
int main()
{
    int num,rem,sum=0,rev=0;
    scanf("%d",&num);
    int n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;

        num=num/10;
    }
    if(n==rev)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
