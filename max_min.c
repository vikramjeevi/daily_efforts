#include<stdio.h>
int main()
{
    int n;
    printf("enter size: ");
    scanf("%d",&n);
    int a[20];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("MAX is : %d\n",a[n-1]);
    printf("MIN is : %d\n",a[0]);

}
