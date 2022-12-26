#include<stdio.h>
#define MSG "hi"
#undef MSG
#define MSG "HELLO"

int main()
{
    printf(MSG);
}
