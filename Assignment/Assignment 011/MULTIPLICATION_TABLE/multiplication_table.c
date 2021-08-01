// DISPLAY MULTIPLICATION TABLE OF A GIVEN NUMBER
#include<stdio.h>
int main()
{
    int i,n,multi=0;

    printf("\n\n---------- MULTIPLICATION TABLE OF A GIVEN INTEGER ----------");
    printf("\n\n       Enter an integer for multiplication table : ");
    scanf("%d",&n);
    i=1;
    printf("\n\t    MULTIPLICATION TABLE OF %d : \n",n);

    do
    {
        multi= n*i;
        printf("\n\t\t  %d*%d = %d",n,i,multi);
        i++;

    }while(i<=10);

    printf("\n\n\n    Successfully Executed....\n\n\n");
    return 0;
}
