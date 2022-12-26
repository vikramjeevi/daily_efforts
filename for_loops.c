//for loop with continue and break
#include<stdio.h>
int main()
{
    int n;
    printf("Enter : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i==4)
           {
              //break;
              continue;
           }
        printf("%d",i);
    }
}
