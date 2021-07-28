// details
#include<stdio.h>
int main()
{
    char name[10], Surname[10], Regno[30], Email[30], PhoneNo[20];


    printf("\n\n Enter Student details :\n ----------------------");

    printf("\n\n\t Name : ");
    scanf("%s%s",name,Surname);
    printf("\n\t Registration No : ");
    scanf("%s",Regno);
    printf("\n\t E-mail ID : ");
    scanf("%s",Email);
    printf("\n\t Phone Number : ");
    scanf("%s",PhoneNo);

    printf("\n\n STUDENT INFORMATION :\n -------------------");

    printf("\n\n\t Name : %s %s",name,Surname);
    printf("\n\t Registration No: %s ",Regno);
    printf("\n\t E-mail ID : %s",Email);
    printf("\n\t Phone Number : %s",PhoneNo);

    printf("\n\n\n Successfully Executed...\n\n");
    return 0;


}
