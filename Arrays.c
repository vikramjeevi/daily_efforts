//unique elements
#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter size : ");
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++)
    {
        c=0;
        for(int j=0;j<a;j++)
        {
            if(i!=j)
                {
                    if(n[i]==n[j])
                        c++;
                }
        }
        if(c==0)
            printf("%d ",n[i]);
    }
}
