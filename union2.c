#include<stdio.h>
union abc{
    int a,b;
    char c;

};
int main()
{
    union abc u;
    u.a=23;
    ////printf("%d\n",u.a);
    printf("%d\n",&u.b);
    printf("%d\n",&u.c);
}
