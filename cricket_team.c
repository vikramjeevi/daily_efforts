#include<stdio.h>
struct ckteam
{
    char name[20];
    int runs;

};
int main()
{
    struct ckteam c[11];
    printf("No.\tPlayers \t Runs \n");
    printf("-----------------------------------\n");
    for(int i=0;i<11;i++)
    {
        printf("%d\t",i+1);
        scanf("%s%d",&c[i].name,&c[i].runs);
    }
    printf("Extras : ");
    int ex;
    scanf("%d",&ex);
    printf("-----------------------------------\n");
    int sum=0;
    for(int i=0;i<11;i++)
    {
        sum+=c[i].runs;

    }
    printf("Total team score : %d",sum+ex);

}
