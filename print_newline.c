#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i=0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    while(s[i]!='\0')
    {
        printf("%s\n",*s+i);
        i++;
    }
    //Write your logic to print the tokens of the sentence here.
    return 0;
}
