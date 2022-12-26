#include<stdio.h>
int main()
{
    int n,a[32];
    scanf("%d",&n);
    printf("Normal bits : ");
    for(int i=16-1;i>=0;i--)
    {
        printf("%d",(n>>i)&1);
    }
    printf("\n");
    printf("Reversed bits : ");
    for(int i=0;i<16;i++)
    {
        printf("%d",(n>>i)&1);
    }
}
