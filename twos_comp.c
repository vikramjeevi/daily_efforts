#include<stdio.h>
int main()
{

    int n;
    printf("enter the no. of bits : ");
    scanf("%d",&n);
    int c=1;
    char bits[n+1];
    char onebits[n+1];
    char twobits[n+1];
    scanf("%s",bits);
    printf("Bits : %s",bits);
    printf("\n");
    //one's compliament
    for(int i=0;i<n;i++)
    {
        if(bits[i]=='0')
            onebits[i]='1';
        else
            onebits[i]='0';
    }
    onebits[n]='\0';
    printf("Ones compliament : %s",onebits);
    printf("\n");
    for(int i=n-1;i>=0;i--)
    {
        if(onebits[i]=='1'&&c==1)
        {
            twobits[i]='0';
        }
        else if(onebits[i]=='0'&&c==1)
           {
            twobits[i]='1';
            c=0;
           }
        else
            twobits[i]=onebits[i];


    }
    twobits[n]='\0';
   printf("Twos compliament : %s",twobits);
}
