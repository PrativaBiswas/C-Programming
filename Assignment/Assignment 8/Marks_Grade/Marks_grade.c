//Calculate the marks and their GRADE
#include<stdio.h>
int main()
{
    float physics, chemistry, maths, biology, computer, sum, total, percentage;

    printf("\n\n  GRADING OF STUDENTS IN THE BASIS MARKS\n  ------------------------------------- ");
    printf("\n\n\t Enter the Total marks :  ");
    scanf("%f",&total);
    printf("\n\t Enter the marks of Physics :  ");
    scanf("%f",&physics);
    printf("\n\t Enter the marks of Chemistry :  ");
    scanf("%f",&chemistry);
    printf("\n\t Enter the marks of Mathematics :  ");
    scanf("%f",&maths);
    printf("\n\t Enter the marks of Biology :  ");
    scanf("%f",&biology);
    printf("\n\t Enter the marks of Computer :  ");
    scanf("%f",&computer);

    sum = physics+chemistry+maths+biology+computer;
    percentage= sum/total*100;

    if(percentage>=90)
        printf("\n\n \tThe student has grade A");
    else if(percentage>=80)
        printf("\n\n\t The student has grade B");
    else if(percentage>=70)
        printf("\n\n\t The student has grade C");
    else if(percentage>=60)
        printf("\n\n\t The student has grade D");
    else if(percentage>=40)
        printf("\n\n\t The student has grade E");
    else if(percentage<40)
         printf("\n\n\t The student Failed");
    else
         printf("\n\n\t The student does not appear the exam");

    printf("\n\n Successfully Executed...\n\n\n");
    return 0;








}
