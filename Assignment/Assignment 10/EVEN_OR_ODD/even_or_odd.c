//check the number even or odd by using switch case
#include<stdio.h>
int main()
{
    int num;

    printf("\n\n      -------- NUMBER IS EVEN OR ODD BY SWITCH CASE--------");
    printf("\n\n\t\t Enter a number for check : ");
    scanf("%d",&num);

    switch( num%2)
    {
     case 0:
         printf("\n\n\t\t  The number %d is even",num);
         break;
     case 1:
        printf("\n\n\t\t  The number %d is odd",num);
        break;
     default:
        printf("\n\n\t WRONG INPUT ");

    }

    printf("\n\n\n   Successfully Executed....\n\n");
    return 0;

}
