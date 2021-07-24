
//Maximum number between two number by switch case
#include<stdio.h>
int main()
{
    int num1, num2;

    printf("\n\n  --------- MAXIMUM NUMBER BETWEEN TWO NUMBER BY USING SWITCH CASE --------");
    printf("\n\n\n\t\t   Enter two number for checking : ");
    scanf("%d%d",&num1,&num2);

    switch(num1>num2)
    {
    case (0):
        printf("\n\n\t\t  The number %d is maximum",num2);
        break;
    case(1):
        printf("\n\n\t\t  The number %d is maximum",num1);
        break;
    default:
        printf("\n\n\t\t   ERROR! ");

    }
    printf("\n\n\n\t  Successfully Executed.....\n\n\n");
    return 0;
}
