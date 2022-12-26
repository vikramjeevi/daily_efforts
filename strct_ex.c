#include<stdio.h>
typedef struct employee{
    char name[20];
    int id;
    char dept[4];


}emp;
int main()
{
    int n;
    printf("Enter the no of employees ; ");
    scanf("%d",&n);
   emp e[n];
   for(int i=0;i<n;i++)
   {
       printf("Enter name : ");
       scanf("%s",&e[i].name);
       printf("Enter id : ");
       scanf("%d",&e[i].id);
       printf("Enter dept. : ");
       scanf("%s",&e[i].dept);

       printf("------\n");

   }
   printf("##########################\n");
   for(int i=0;i<n;i++)
   {


      printf("name : %s\t id : %d\t  dept. : %s\n", e[i].name,e[i].id,e[i].dept);
   }
}

