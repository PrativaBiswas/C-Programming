// Check whether the year Leap year or not
#include<stdio.h>
int main()
{
    int year;

    printf("\n\n    LEAP YEAR OR NOT\n    ----------------");
    printf("\n\n\t Enter the Year : ");
    scanf("%d",&year);

    if(year%4==0|| year%100!=0&& year%400==0)
        printf("\n\n\t This year is a leap year ");
    else
        printf("\n\n\t This is not a leap year  ");

    printf("\n\n\n   Successfully Executed...\n\n");
    return 0;
}
