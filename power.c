#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    printf("Enter the number ; ");
    scanf("%d",&n);
    printf("Enter the exponent ; ");
    scanf("%d",&x);

    printf("-----------------------------------------\n");

    printf("with power function = ");
    int y=pow(n,x);
    printf("%d\n",y);

    printf("-----------------------------------------\n");

    printf("without power function = ");
    int mul=1;
    for(int i=1;i<=x;i++)
    {
        mul=mul*n;
    }
    printf("%d\n",mul);

}
