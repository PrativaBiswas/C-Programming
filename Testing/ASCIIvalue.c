//ASCII value
#include<stdio.h>
int main()
{
    char name[10];

    printf("\n\n\    ASCII VALUE OF YOUR FIRST AND SECOND LETTER OF MY NAME :\n    -------------------------------------------------------- ");
    printf("\n\n\t\t Enter your name : ");
    scanf("%c%c",&name[0],&name[1]);


    printf("\n\n\t ASCII value : %d",name[0]);
    printf("\n\n\t ASCII value : %d",name[1]);

    printf("\n\n Successfully Executed....\n\n\n");
    return 0;

}
