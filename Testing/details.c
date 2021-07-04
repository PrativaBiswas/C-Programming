// details
#include<stdio.h>
int main()
{
    char name[20];
    char address[50];
    int number, age;
    char mail[10];

    printf("\n\n Enter your details :\n -------------------");
    printf("\n\n Name : ");
    scanf("%s",name);
    printf("\n Address : ");
    scanf("%s",address);
    printf("\n Ph.Number :");
    scanf("%d",&number);
    printf("\n Age : ");
    scanf("%d",&age);
    printf("\n Mail ID :");
    scanf("%s",mail);
    printf("\n\n YOUR INFORMATION :\n ----------------");
    printf("\n\n Your Name :%s",name);
    printf("\n Address :%s",&address);
    printf("\n Phone Number :%d",&number);
    printf("\n Age :%d", &age);
    printf("\n Mail ID :%s",mail);

    printf("\n\n Successfully Exucated...\n\n");
    return 0;


}
