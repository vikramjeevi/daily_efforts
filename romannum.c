//Write a C program to convert a given integer to roman number.
//
//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
//Symbol       Value
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//Expected Output:
//Original integer: 12
//Roman number of the said integer: XII
#include<stdio.h>
int conv(char s)
{
    switch(s)
    {
        case 'I' : return 1; break;
        case 'V' : return 5; break;
        case 'X' : return 10; break;
        case 'L' : return 50; break;
        case 'C' : return 100; break;
        case 'D' : return 500; break;
        case 'M' : return 1000; break;

    }
}
int main()
{
    char str[100];
    gets(str);
    printf("Roman number : ");
    puts(str);
    int sum=0,i=0;
    while(str[i]!='\0')
    {
        int r=conv(str[i]);
        sum=sum+r;
        i++;
    }
    printf("integer : %d",sum);
}
