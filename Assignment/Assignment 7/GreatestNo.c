//maximum number between two number
#include<stdio.h>
int main()
{
    int N1,N2;

    printf("\n\n     MAXIMUM NUMBER BETWEEN TWO NUMBER\n     ---------------------------------");
    printf("\n\n\tEnter the value of N1 and N2 :  ");
    scanf("%d%d",&N1,&N2);

    if(N1>N2)
        printf("\n\n\t N1 is the maximum number that is   : %d", N1);
    else
        printf("\n\n\t N2 is the maximum number that is  : %d  ", N2);


    printf("\n\n\n Successfully Executed...\n\n");
    return 0;



}


