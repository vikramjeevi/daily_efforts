#include<stdio.h>
#include<math.h>
int armstrong(int num)
{
    int num1=num,c=0,rem,s,sum=0;
    while(num1!=0)
    {
        num1=num1/10;
        c++;
    }
    while(num!=0)
    {
        rem=num%10;
        s=pow(rem,c);
        sum=sum+s;
        num=num/10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i==armstrong(i))
            printf("%d\n",i);
    }
}
