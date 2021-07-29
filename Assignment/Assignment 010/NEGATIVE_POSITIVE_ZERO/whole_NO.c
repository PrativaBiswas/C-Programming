// CHECK WHETHER THE NUMBER IA A -VE ,+VE OR ZERO
#include<stdio.h>
int main()
{
    int num;

    printf("\n\n-----------NUMBER IS POSITIVE , NAGATIVE OR ZERO-----------------");
    printf("\n\n\t Enter the value for check : ");
    scanf("%d",&num);

    switch(num>0)
    {
    case 1:
        printf("\n\n\t The number Positive");
        break;
    case 0:
        {
           switch(num<0)
            {
            case 1:
                printf("\n\n\t The number is Negative");
                break;
            case 0:
                printf("\n\n\t The number is Zero");
                break;
            }
        }
        break;
    default :
         printf("\n\n\t WRONG INPUT");

    }
     printf("\n\n\n     Successfully Executed....\n\n\n");
     return 0;

}
