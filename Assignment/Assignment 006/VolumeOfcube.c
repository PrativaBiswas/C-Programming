//Volume of Cube
#include<stdio.h>
int main()
{
    float side, volume;

    printf("\n\n   VOLUME OF CUBE\n   --------------");
    printf("\n\n     Enter the value of side of a cube : ");
    scanf("%f",&side);

    volume=side*side*side ;
    printf("\n     Volume of the cube = %f",volume);

    printf("\n\n\n Successfully Executed....\n\n\n");
    return 0;
}
