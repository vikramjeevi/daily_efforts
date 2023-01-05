#include<stdio.h>
struct worker
{
    char name[20];
    int wage;
    int wdays;
};

int main()
{
    int n=2;
    struct worker w[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name : ");
        scanf("%s",&w[i].name);
        printf("Enter daily wage : ");
        scanf("%d",&w[i].wage);
        printf("Enter working days : ");
        scanf("%d",&w[i].wdays);
        printf("-------------------------------\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("NAME : %s\n",w[i].name);
        printf("Total Payment : %d\n",w[i].wage*w[i].wdays);
        printf("-------------------------------\n");
    }
}
