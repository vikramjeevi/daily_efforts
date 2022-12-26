#include<stdio.h>
union abd{

int a;
float b;
double f;
char d;
};

int main()
{
    printf("%d",sizeof(union abd));
}
