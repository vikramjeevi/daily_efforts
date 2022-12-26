#include<stdio.h>
#include<string.h>
#include<ctype.h>
//int main()
//{
//    char str[100];
//    gets(str);
//    int i=0;
//    while(str[i]!='\0')
//    {
//        if(islower(str[i]))
//            toupper(str[i]);
//        else
//            tolower(str[i]);
//        i++;
//    }
//    //strupr(str);
//    puts(str);
//
//}
void main()
{
  char str[100];
  int ctr, ch, i;

       printf("\n\nReplace lowercase characters by uppercase and vice-versa :\n");
       printf("--------------------------------------------------------------\n");

	   printf("Input the string : ");
       fgets(str, sizeof str, stdin);

  ctr=strlen(str); /*shows the number of chars accepted in a sentence*/

  printf("\nThe given sentence is   : %s",str);

  printf("After Case changed the string  is: ");
  for(i=0; i < ctr; i++)
  {
    ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
    putchar(ch);
   }
   printf("\n\n");
}
