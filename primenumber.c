#include<stdio.h>

int main()
{
    int m;
    scanf("%d",&m);
    for(int n=1; n<=m; n++)
    {
        int c=0;
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
                c++;

        }
        if(c==2)
            printf("%d ",n);
        else
            continue;
    }
}
