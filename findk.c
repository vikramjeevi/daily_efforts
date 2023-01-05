#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int solve (char str[], char k) {
   int count=0;
   int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==k)
            count++;
        i++;
    }
    return count;

}

int main() {
    int T;
    scanf("%d", &T);
   for(int t_i = 0; t_i < T; t_i++)
    {
        char ch;
        char str[1000];



    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

        int out_=solve(str, ch);
        printf("%d", out_);
        printf("\n");
    }
}
