//swap with pointer (call by reference)
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values : ");
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d\n",a,b);

}
void swap(int *c, int *d)
{
    int t=*c;
        *c=*d;
        *d=t;
        printf("%d %d\n",*c,*d);
}
