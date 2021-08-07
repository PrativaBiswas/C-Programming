//ADDITION OF NUMBERS USING FUNCTON
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    printf("\n\n---------------- ADDITION OF  TWO NUMBER USING FUNCTION ------------------");

    add( a,b);

    printf("\n\n\n\n     Successfully Executed......\n\n\n ");
    return 0;
}
int add(int a,int b)
{
    int c;
    printf("\n\n\n\t\t Enter two number : ");
    scanf("%d%d",&a,&b);

    c=a+b;
    printf("\n\n\t\t RESULT = %d",c);
}
