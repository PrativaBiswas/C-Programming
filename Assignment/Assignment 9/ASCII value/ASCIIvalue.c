//ASCII value
#include<stdio.h>
int main()
{
    char name[10];

    printf("\n\n\    ASCII VALUE OF YOUR FIRST AND SECOND LETTER OF MY NAME :\n    -------------------------------------------------------- ");
    printf("\n\n\t\t Enter your name : ");
    scanf("%s",&name);


    printf("\n\n\t\t The first letter of my name : %c",name[0]);
    printf("\n\n\t\t ASCII value of first letter : %d",name[0]);


    printf("\n\n    Successfully Executed....\n\n\n");
    return 0;

}
