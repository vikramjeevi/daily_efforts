#include<stdio.h>
void setorclear()
{
    int n,x,m;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the bit position to check :");
    scanf("%d",&x);
    m=n>>x-1;
    if(m&1)
        printf("The bit is set");
    else
        printf("The bit is clear");
}

int main()
{
    int n;
    printf("enter the size : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        setorclear();
        printf("\n-----------\n");
    }
}
