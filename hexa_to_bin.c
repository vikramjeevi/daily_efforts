#include<stdio.h>
int main()
{
    int n;
    printf("enter the Hexadecimal value : ");
    scanf("%x",&n);
    printf("HEXA = ");
    for(int i=7; i>=0; i--)
    {
      printf("%d",(n>>i)&1);
    }
}
