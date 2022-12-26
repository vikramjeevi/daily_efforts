#include<stdio.h>
float sum(float a, float b){ return a+b; }
float sub(float a, float b){ return a-b; }
float mul(float a, float b){ return a*b; }
float div(float a, float b){ return a-b; }

int main()
{
    int choice;
    float(*ptr[4])(float, float)={sum,sub,mul,div};
    printf("Enter 0 for sum, 1 for sub, 2 for mul, 3 for div\n");
    scanf("%d",&choice);
    float x,y;
    printf("Enter x and y\n");
    scanf("%f%f",&x,&y);
    printf("result = %.2f",(ptr[choice](x,y)));
}

