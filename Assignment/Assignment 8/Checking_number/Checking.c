// Check the Number divisible by 5 and 11 or not
#include<stdio.h>
int main()
{
    int number;

    printf("\n\n CHEKING THE NUMBER DIVISIBLE BY 5 AND 11 OR NOT \n -----------------------------------------------");
    printf("\n\n\t Enter the number : ");
    scanf("%d",&number);

    if(number%5==0 && number%11==0)
        printf("\n\t The number is divisible by 5 and 11");
    else
        printf("\n\t The number not divisible by 5 and 11");

    printf("\n\n Successfully Executed...\n\n");
    return 0;
}
