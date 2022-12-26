//level of intelligence of aperson
#include<stdio.h>
int main()
{
    int y;
    float i,x;
    for(y=1,x=5.5;y<=6,x<=12.5;)
    {
        i=2+(y+0.5*x);
        printf("i=%.2f y=%d x=%.2f\n",i,y,x);
        y++;
        x=x+0.5;
    }
}
