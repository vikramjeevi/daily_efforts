#include<stdio.h>
void sort(int *b, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(b+i)>*(b+j))
            {
                int t=*(b+i);
                *(b+i)=*(b+j);
                *(b+j)=t;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",*(b+i));

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    sort(a,n);
}
