//DISPLAY THE CUBE OF NUMBERS UP TO GIVEN AN INTEGER
#include<stdio.h>
int main()
{
    int i,n,cube=0;

    printf("\n\n---------- CUBE OF NUMBERS UPTO GIVEN AN INTEGER ----------");
    printf("\n\n       Enter an integer up to which cube will perform : ");
    scanf("%d",&n);
    i=1;

    do
    {
        cube=i*i*i;
        printf("\n\t Cube of %d = %d",i,cube);
        i++;

    }while(i<=n);

    printf("\n\n\n    Successfully Executed....\n\n\n");
    return 0;
}
