//sorting elements(ascending)
#include<stdio.h>
int main()
{
    int a;
    printf("Enter size : ");
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
                    if(n[i]<n[j])
                    {
                        int t=n[i];
                        n[i]=n[j];
                        n[j]=t;
                    }

                }
        }


    for(int i=0;i<a;i++)
    {
        printf("%d ",n[i]);
    }
}

