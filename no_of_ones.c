
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    int r,c=0;
    while(n!=0)
    {
        r=n%10;
        if(r==1)
            c++;
        n=n/10;
    }
    printf("Total number of digit 1 appearing in %d is %d",m,c);
}
