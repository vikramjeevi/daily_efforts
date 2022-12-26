#include<stdio.h>
#define PI 3.142

int main()
{
    float r,area,pm;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);
    area=2*PI*r*r;
    printf("area of circle : %.2f\n",area);
    pm=2*PI*r;
    printf("perimeter of circle : %.2f\n",pm);
}
