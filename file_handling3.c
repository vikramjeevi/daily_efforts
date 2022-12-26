#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file1.txt","a+");
    if(fp==NULL)
        {printf("EMPTY");
         return;
        }
    char str[1000];
   // printf("%s",fgets(str,200,fp));
   while(!feof(fp)){
    printf("%s",fgets(str,1000,fp));
   }
   printf("\n");

   printf("\n size of files : %dbytes\n",ftell(fp));

    fclose(fp);
}

