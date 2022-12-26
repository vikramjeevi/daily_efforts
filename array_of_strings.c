#include<string.h>
#include<stdio.h>
int main()
{
    char a[3][10]={},b[10];
    for(int i=0;i<3;i++)
    {
        scanf("%s",&a[i]);
    }
    printf("\n");
    //strcpy(arr[0],"HELLOO");
    for(int i=1;i<=3;i++)
    {
        for(int j=0;j<=3-i;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(b,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],b);
            }
        }

    }
    for(int i=0;i<=3;i++)
    {
        printf("%s\n",a[i]);
    }
}
