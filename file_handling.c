#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file12.txt","w");
    char str[200];
    gets(str);

    if(fp!=NULL)
        fprintf(fp,"%s",str);
    else
        printf("Unsuccessfull");
    fclose(fp);
}
