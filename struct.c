#include<stdio.h>
typedef struct stu{
       int id;
       char name[10];
}s;

int main()
{
    s a;
    scanf("%s %d",&a.name,&a.id);
    bio(a.name,a.id);
}
void bio(char b[], int c)
{
    printf("%s %d",b,c);
}
