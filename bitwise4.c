#include<stdio.h>
int main()
{
    int a=0x1234;
    printf("0x%x\n",a);
    int b=(a&0x000F)<<4;
    int c=(a&0x00F0)>>4;
    int d=b|c;
    printf("0x%x",d);

}

