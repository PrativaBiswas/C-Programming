//checking the character  vowel or consonant?
#include<stdio.h>
int main()
{
    char ch;

    printf("\n\n  CHARACTER IS VOWELS OR CONSONANT\n  ---------------------------------");
    printf("\n\n\t Enter the Character : ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
         printf("\n\n\t The character is an vowel");
    else
         printf("\n\n\t The character is a consonant");

    printf("\n\n\n Successfully Executed......\n\n");
    return 0;
}
