//SUM OF FIRST 10 NATURAL NUMBER
#include<stdio.h>
int main()
{
    int i=1,n=10,sum=0;

    printf("\n\n  ---------- SUM OF FIRST 10 NATURAL NUMBER ----------");
    printf("\n\n\t Sum will be displayed one after one below  : \n");


    for(i=1;i<=n;i++)
    {
        sum= sum+i;
        printf("\n\t SUM = %d",sum);

    }

    printf("\n\n\t--------------------\n\t|\t\t\   |\n\t| GRAND TOTAL = %d |\n\t--------------------",sum);

    printf("\n\n\n   Successfully Executed...\n\n\n");
    return 0;

}
