#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[(n/2)-1];
    int b[(n/2)-1];
    for(int i=1;i<n;i++)
    {
        if(i!=n/2)
        {
           // a[i]=i;
            //b[i]=n-i;
            //if(prime(a[i])==1&&prime(b[i])==1)
            //    printf("the sum of 2 prime numbers i.e. %d + %d = %d\n",a[i],b[i],n);
            if(prime(i)==1&&prime(n-i)==1)
                printf("the sum of 2 prime numbers i.e. %d + %d = %d\n",i,n-i,n);

        }
        else
            break;
    }
}
