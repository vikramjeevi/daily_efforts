
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file12.txt","r");


    if(fp!=NULL)
        {//fputs("RISC stands for Reduced Instruction Set Computer Processor,",fp);
//          fseek(fp,12,SEEK_SET);
//          fputs("FOR",fp);
          char c;
          while((c=fgetc(fp))!=EOF)
          {
              printf("%c",c);
          }
          rewind(fp);

          while((c=fgetc(fp))!=EOF)
          {
              printf("%c",c);
          }


        }
    else
        printf("Unsuccessfull");
    fclose(fp);
}
