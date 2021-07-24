//print day of week using switch case
#include<stdio.h>
int main()
{
    int n;

    printf("\n\n   ------- PRINT DAY OF WEEK USING SWITCH -------");
    printf("\n\n\n\t   Enter number of a day of the week : ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("\n\n\t   The day is Monday");
        break;
    case 2:
        printf("\n\n\t   The day is Tuesday");
        break;
    case 3:
        printf("\n\n\t   The day is Wednesday");
        break;
    case 4:
        printf("\n\n\t   The day is Thursday");
        break;
    case 5:
        printf("\n\n\t   The day is Friday");
        break;
    case 6:
        printf("\n\n\t  The day is Saturday");
        break;
    case 7:
        printf("\n\n\t   The day is Sunday");
        break;
    default:
        printf("\n\n\t   WRONG INPUT");
        break;
    }

    printf("\n\n\n    Successfully Executed.....\n\n\n");
    return 0;
}
