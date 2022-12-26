#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discr;
    float r1,r2;
    printf("ax^2+bx+c=0\n Enter the values for a,b,c : ");
    scanf("%f%f%f",&a,&b,&c);
    discr=(b*b)-(4*a*c);
    if(discr==0)
    {
        r1=r2=(-b)/(2*a);
        printf("Root1 = %.2f, Root2 = %.2f",r1,r2);

    }
    else if(discr>0)
    {
        r1=(-b+sqrt(discr))/(2*a);
        r2=(-b-sqrt(discr))/(2*a);
        printf("Root1 = %.2f, Root2 = %.2f",r1,r2);
    }
    else
    {
        float real=(-b)/(2*a);
        float img=sqrt(-discr)/(2*a);
        printf("Root1 = %.2f+%.2fi, Root2 = %.2f-%.2fi",real,img,real,img);
    }
}
