#include<stdio.h>
typedef struct employee{
    char name[20];
    int id;
    char dept[3];

}emp;
int main()
{
    int n;
    printf("enter the no. of employees : ");
    scanf("%d",&n);
    emp e[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %s",&e[i].name,&e[i].id,&e[i].dept);
    }
     printf("--------------------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("Name: %s\n ID: %d\n Dept.: %s\n",e[i].name,e[i].id,e[i].dept);
    }
    printf("--------------------------------\n");
    int search;
    printf("Enter the ID for search: ");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(e[i].id==search)
        {
            printf("Name: %s\n Dept.: %s\n",e[i].name,e[i].dept);
        }
        else
            continue;
    }

}
