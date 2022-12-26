#include<stdio.h>
int main()
{
  char a[100],ch;
  gets(a);
  printf("\n");
  printf("Enter the character : ");
  scanf("%c",&ch);
  int i=0,c=0;
  while(a[i]!='\0')
  {
      if(ch==a[i])
        c++;
      i++;
  }
  printf("\n");
  printf(" %c is repeated %d times",ch,c);
  printf("\n");
}
