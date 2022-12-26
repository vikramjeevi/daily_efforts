#include<stdio.h>
#define MSG(x,y)\
    printf(#x " and " #y " are G.O.A.T");
#define tokenpass(n) printf("token" #n "=%d", token##n)
int main()
{
    //MSG(virat,messi);
    int token28=48;
    tokenpass(28);
}
