

#include<stdio.h>
#include<math.h>
int disarium(int num)
{
    int num1=num,c=0,sum=0,rem,s;
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
        c--;
    }
    return sum;
}
int main()
{
    int n;
    printf("enter end range : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i==disarium(i))
            printf("%d\n",disarium(i));
        else
            continue;
    }
}
