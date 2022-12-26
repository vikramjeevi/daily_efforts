#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char num[100];
    scanf("%s",num);
    for(int i='0'; i<='9'; i++)
    {

        int j=0,c=0;
        while(num[j]!='\0')
        {
            if(num[j]==i)
                c++;
            j++;
        }
        printf("%d ",c);
    }
}
