
//DIAPLAY N NUMBER OF NATURAL NUMBER AND THEIR SUM
#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("\n  ---------- SUM OF FIRST N NATURAL NUMBER ----------");
    printf("\n\n\t Enter the N number for natural number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\n\t Natural number = %d",i);
        sum= sum+i;
        printf("\t SUM = %d",sum);

    }

    printf("\n\n\t------------------------\n\t|\t\t       |\n\t   GRAND TOTAL = %d\n\t|\t\t       |\n\t------------------------",sum);

    printf("\n\n\n   Successfully Executed...\n\n\n");
    return 0;

}
