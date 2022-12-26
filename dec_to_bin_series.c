#include<stdio.h>
int dectobin(int num)
{
    int a[10],i=0;
    while(num!=0)
    {
        a[i]=num%2;
        num=num/2;
        i++;

    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int n;
    printf("enter the range from 1 to n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\t|\t",i);
        dectobin(i);
        printf("\n");
    }


}
