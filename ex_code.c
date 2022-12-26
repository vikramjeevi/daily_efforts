#include<stdio.h>
int main()
{
    int x[5]={1,2,3,4,5};
    int* p=x;
    int i;

    for(i=0;i<2;i++)
    {
        int t=*(p+i);
        printf("*(p+i)=%d \n",*(p+i));
        *(p+i)=*(p+4-i);
        printf("*(p+4-i)=%d \n",*(p+4-i));
        *(p+4-i)=t;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
}
