#include<stdio.h>
int main()
{
    char bit[30];
    char bit1[30];
    scanf("%s",bit);
    printf("\n before stuffing :\t %s",bit);
    printf("\n");
    int c=0,d=0;
    int i=0;
    int j=0;
    while(bit[i]!='\0')
    {
        if(bit[i]=='0')
        {
            c++;
            d=0;
        }
        else if(bit[i]=='1')
        {
            d++;
            c=0;
        }
        else
        {
            c=0;
            d=0;
        }
        if(c==5)
        {
            bit1[j++]=bit[i++];
            bit1[j++]='1';
            c=0;
            //printf("%d %d\n",i,j);
        }
        else if(d==5)
        {
            bit1[j++]=bit[i++];
            bit1[j++]='0';
            d=0;
            //printf("%d %d\n",i,j);
        }

        else
        {
            bit1[j]=bit[i];
            //printf("%d %d\n",i,j);
            j++;
            i++;
        }
    }
    //bit1[j]='\0';
    printf("\n after stuffing :\t %s",bit1);
    printf("\n");
}
