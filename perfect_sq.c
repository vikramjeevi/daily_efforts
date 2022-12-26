#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    float fVar;
    int iVar;
    fVar=sqrt((double)n);
    iVar=fVar;

    if(iVar==fVar)
        printf("%d is a perfect square.",n);
    else
        printf("%d is not a perfect square.",n);

}
