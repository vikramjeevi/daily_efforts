#include<stdio.h>
int main()
{
    int num,a=0,b=0,rem;
    scanf("%d",&num);
    printf("number is : %d\n",num);
    while(num!=0)
    {
        rem=num%10;
        if(rem==0)
            a++;
        else if(rem==1)
            b++;
        num=num/10;
    }
    printf("no. of 0s : %d\n",a);
    printf("no. of 1s : %d\n",b);
}
