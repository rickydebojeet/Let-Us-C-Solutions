#include <stdio.h>
#include <math.h>
int main()
{
    float la,lo,ga,go,d;
    printf("Enter the latitudes and longitude of 1st place\n");
    scanf("%f %f",&la,&lo);
    printf("Enter the latitudes and longitude of 2nd place\n");
    scanf("%f %f",&ga,&go);
    d = 3963 * acos(((sin(la)*sin(ga))+(cos(la)*cos(ga)))*cos(lo-go));
    printf("Distance in nautical miles is = %f",d);
    return 0;
}
