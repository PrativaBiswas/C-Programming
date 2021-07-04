//swiping of two number
#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("\n\n\t\tSwiping of two number :\n\t\t------------------------");
    printf("\n\n\t\t Before swap\n\t\t -----------");
    printf("\n\t\t First Number :%d",a);
    printf("\t Second Number :%d ",b);
    b=a+b;
    printf("\n\n\t\t After swap\n\t\t ----------");
    printf("\n\t\t First Number :%d",b-a);
    printf("\t Second Number :%d\n\n\n",b-(b-a));
    return 0;

}
