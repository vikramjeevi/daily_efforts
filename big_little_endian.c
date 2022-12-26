#include<stdio.h>
void check(char *st, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" %.2x",st[i]);

}
int main()
{
    int i=0x12345678;
    check((char*)&i,sizeof(i));

}
