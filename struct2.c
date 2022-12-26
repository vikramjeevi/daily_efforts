#include<stdio.h>
#pragma pack(1)
struct abc
{
    char a;
    int b;
    char c;
    float d;
    char e;
}v;
int main()
{
    printf("%d",sizeof(v));
}
