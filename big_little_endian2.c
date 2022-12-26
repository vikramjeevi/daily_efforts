#include<stdio.h>
int main()
{
    int a=0x11223344;
    printf("0x%x\n",a);
    int c=0x00000000;
    c=((a&0xFF000000)>>24)|c;
    c=((a&0x00FF0000)>>8)|c;
    c=((a&0x0000FF00)<<8)|c;
    c=((a&0x000000FF)<<24)|c;
    printf("0x%x",c);
}
