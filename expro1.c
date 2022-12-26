/*add numbers and its reverse together
ex: 142
   +241
   -----
    383

*/
#include<stdio.h>
int main()
{
    int num1,rem,rev=0;
    printf("Enter the number : ");
    scanf("%d",&num1);
    int num2=num1;
    while(num2!=0)
    {
        rem=num2%10;
        rev=rem+rev*10;
        num2=num2/10;
    }
    printf("Reverse order is : %d\n",rev);
    int sum=num1+rev;
    printf("SUM is : %d",sum);
}
