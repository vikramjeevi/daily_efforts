#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("C:/armkeil/lcd.c","a+");
    if(fp==NULL)
        {printf("EMPTY");
         return;
        }
    char str;

   while((str=fgetc(fp))!=EOF){
    printf("%c",str);
   }

    printf("\n");

   printf("\n size of files : %dbytes\n",ftell(fp));
    fclose(fp);
}
