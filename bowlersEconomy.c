#include<stdio.h>
struct economy
{
    char name[20];
    float overs;
    int wkt;
    float runs;
    float eny;
};

int main()
{
    printf("no. of bowlers : ");
    int n;
    scanf("%d",&n);
    struct economy e[n];
    printf("Bowler\t Overs\t Runs\t Wickets\n");
    printf("-------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s%f%f%d",&e[i].name,&e[i].overs,&e[i].runs,&e[i].wkt);
        e[i].eny=e[i].runs/e[i].overs;
    }
    printf("\nBowler\t  Economy\n");
    printf("-------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t %.2f\n",e[i].name,e[i].eny);
    }

    printf("--------Best Economy--------\n");
    float low=e[0].eny;
    for(int j=0;j<n;j++)
    {
        if(e[j].eny<low)
            low=e[j].eny;
    }
    printf("\nBowler\t Overs\t Runs\t Wickets\tEconomy\n");
    printf("-------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        if(e[i].eny==low)
        {
        printf("%s\t %.1f\t %.1f\t %d\t %.2f\n",e[i].name,e[i].overs,e[i].runs,e[i].wkt,e[i].eny);
        }
    }
}
