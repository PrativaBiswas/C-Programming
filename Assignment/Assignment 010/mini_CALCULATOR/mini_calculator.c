//MINI CALCULATOR
#include<stdio.h>
int main()
{
    int i,choice;
    int n1, n2, result=1;

    printf("\n\n    ------------ CALCULATOR -------------");
    printf("\n\n\t  _______________________________");
    printf("\n\n\t  |                             |");
    printf("\n\t  |\t CALULATE :             |\n\t  |\t                        |\n\t  |\t 1.ADDITION  \t\t|\n\t  |\t 2.SUBTRACTION   \t|  ");
    printf("\n\t  |\t 3.MULTIPLICATION \t|\n\t  |\t 4.DIVISION \t\t|\n\t  |\t 5.MODULUS \t\t|\n\t  |\t 6.POWER  \t\t|");
    printf("\n\t  _______________________________");
    printf("\n\n   CALCULATOR WILL PERFORM OPERATION ACCORDING TO YOUR CHOICE ON THE BASIS OF ABOVE CHOICE :");
    printf("\n\n\t _____________________________________________");
    printf("\n\n\t |                                           |\n\t             Enter your choice : ");
    scanf("%d",&choice);
    printf("\n\t |                                           |\n\t      Enter numbers to calculate : ");
    scanf("%d%d",&n1,&n2);
    printf("\n\t |                                           |");

    switch(choice)
    {
    case 1:
        n1+n2;
        printf("\n\n\t |                                           |\n\t\t      ADDITION = %d",n1+n2);
        break;
    case 2:
        n1-n2;
        printf("\n\n\t |                                           |\n\t\t      SUBTRACTION = %d",n1-n2);
        break;
    case 3:
        n1*n2;
        printf("\n\n\t |                                           |\n\t\t      MULTIPLICATION = %d",n1*n2);
        break;
    case 4:
        n1/n2;
        printf("\n\n\t |                                           |\n\t\t      DIVISION = %d",n1/n2);
        break;
    case 5:
        n1%n2;
        printf("\n\n\t |                                           |\n\t\t      MODULUS = %d",n1%n2);
        break;
    case 6:
        {
           for(i=1;i<=n2;i++)
                result= n1*result;
                printf("\n\n\t |                                           |\n\t\t      POWER = %d",result);
        }
        break;

    }
     printf("\n\t |                                           |");
     printf("\n\n\t _____________________________________________");

  printf("\n\n\n    Successfully Executed......\n\n\n");
  return 0;

}
