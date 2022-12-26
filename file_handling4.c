#include<stdio.h>
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    FILE *fp;
    fp=fopen("file12.txt","a+");
    scanf("%d",&n);
    int res=fact(n);
    printf("%d",res);
    if(fp!=NULL)
    {
        fprintf(fp,"the factorial of %d is %d\n",n,res);
    }
    printf("\n");
   fseek(fp,0,SEEK_END);
   printf("\n size of files : %dbytes\n",ftell(fp));
    fclose(fp);
}

