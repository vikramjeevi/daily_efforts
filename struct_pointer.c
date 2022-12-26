#include<stdio.h>
struct details
{
    char name[20];
    char city[10];
    int pincode;
    unsigned int mob_no;
};
int main()
{
    struct details d1;
    struct details *ptr=&d1;
    printf("Enter name : ");
    scanf("%s",&(*ptr).name);
    printf("Enter the city : ");
    scanf("%s",&(*ptr).city);
    printf("Enter the pincode : ");
    scanf("%d",&(*ptr).pincode);
    printf("Enter mob no. : ");
    scanf("%d",&(*ptr).mob_no);
    printf("\n\n");
    printf("Your name is %s and your mob no. is %d, \nYou are from %s-%d",ptr->name,ptr->mob_no,ptr->city,ptr->pincode);
     printf("\n\n");

}
