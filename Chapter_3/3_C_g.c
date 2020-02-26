#include <stdio.h>
int main ()
{
    float a,b,c,sum;
    printf("Please enter the values of angles of triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    sum = a+b+c;
    if (sum==180)
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid.");
    return 0;
}
