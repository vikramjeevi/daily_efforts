#include<stdio.h>
int main()
{
    char a[]="vikram";
//    char b[10];
//    int i=0;
//    while(a[i]!='\0')
//    {
//        b[i]=a[i];
//        printf("%c",b[i]);
//        i++;
//    }
    char *ptr;
    int i=0;
    while(a[i]!='\0')
    {
        *(ptr+i)=a[i];
        i++;
    }
    printf("%s",ptr);


}




