#include<stdio.h>
#include<string.h>
struct emp
{
    int id_no;
    char name[10];
    char city[10];
    char dept[5];
};
int main()
{
   struct emp e1 = {2022,"vikram","CNG","UYU"};
   strcpy(e1.city,"rty");
   printf("%d\n%s\n%s\n%s\n",e1.id_no,e1.name,e1.city,e1.dept);
}
