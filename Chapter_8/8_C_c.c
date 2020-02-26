#include<stdio.h>
#include"areaperi.h"
int main()
{
    int i;
    float r,a,area,perimeter;
    printf("1:Square\n2:Circle\t");
    scanf("%d",&i);
    switch(i)
    {
    case 1: //Square
        printf("Enter the value of side: ");
        scanf("%f",&a);
        area= AREAS(a);
        perimeter= PERIS(a);
        printf("Area is = %.2f\n Perimeter is = %.2f",area,perimeter);
        break;
    case 2: //Circle
        printf("Enter the value of radius: ");
        scanf("%f",&r);
        area= AREAC(r);
        perimeter= PERIC(r);
        printf("Area is = %.2f\n Perimeter is = %.2f",area,perimeter);
        break;
    default:
        break;
    }
    return 0;
}
