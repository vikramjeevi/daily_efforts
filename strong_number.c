#include<stdio.h>
int facto(int y)
{
    if(y==1||y==0)
        return 1;
    else
        return y*facto(y-1);
}
int main()
{
    int n,rem,s=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int m=n;
    while(n!=0)
    {
        rem=n%10;
        int x=facto(rem);
        s+=x;
        n=n/10;
    }
    if(s==m)
        printf("strong number");
    else
        printf("Not");

}
