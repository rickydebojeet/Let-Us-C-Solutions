#include <stdio.h>
int main()
{
    float x,y;
    printf("Enter the values of the co-ordinates of point P.\n");
    scanf("%f %f",&x,&y);
    if (x==0)
        printf("The point lies on the y-axis.");
    else if (y==0)
        printf("The point lies on the x-axis.");
    else if (x==0&&y==0)
        printf("The point lies on the origin.");
    else
        printf("The point lies in the 2-d plane.");
    return 0;
}
