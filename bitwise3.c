#include<stdio.h>
int main()
{
    int a=0x1234;
    printf("0x%x\n",a);
    int b=(a&0x00FF)<<8;
    int c=(a&0xFF00)>>8;
    int d=b|c;
    printf("0x%x",d);

}
