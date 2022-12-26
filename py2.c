/*C program to print following Pyramid:
    **********
    ****  ****
    ***    ***
    **      **
    *        *
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0; j<n; j++)
    {
        for(int i=n-1; i>=j; i--)
          {
              printf("*");
          }
          for(int k=0; k<j ; k++)
          {
              printf("  ");
          }
          for(int i=n-1; i>=j; i--)
          {
              printf("*");
          }
          printf("\n");
    }
}
