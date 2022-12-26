#include<stdio.h>

struct emp
{
    char name[20];
    char city[20];
    char gender;
    int id;
};
void input(struct emp *e)
{
    printf("enter the name : ");
    gets(e->name);
    printf("enter the gender(m/f) : ");
    scanf("%c",&e->gender);
    printf("Enter the Id : ");
    scanf("%d",&e->id);
    printf("enter the city : ");
    scanf("%s",&e->city);
}
void print(struct emp *f)
{
    printf("Name : %s\n",f->name);
    printf("Id : %d\n",f->id);
    printf("gender : %c\n",f->gender);

    printf("city : %s\n",f->city);

}
int main()
{
    struct emp e1;
    struct emp *ptr=&e1;
    input(ptr);
    printf("--------------------------\n");
    print(ptr);
}
