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
    int n;

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
  {
    int m=i,rem,s=0;
    while(m!=0)
    {
        rem=m%10;
        s+=facto(rem);
        m=m/10;
    }
    if(s==i)
        printf("%d ",s);

    }

}

