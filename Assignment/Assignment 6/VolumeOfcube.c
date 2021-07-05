//Volume of Cube
#include<stdio.h>
int main()
{
    float side, area;

    printf("\n\n   VOLUME OF CUBE\n   --------------");
    printf("\n\n     Enter the value of side of a cube : ");
    scanf("%f",&side);

    area=side*side*side ;
    printf("\n     Area of the cube = %f",area);

    printf("\n\n\n Successfully Executed....\n\n\n");
    return 0;
}
