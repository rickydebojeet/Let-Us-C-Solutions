#include<stdio.h>
#define AM(a,b) ((a+b)/2)
int main()
{
    float a,b;
    float m;
    printf("Enter the two numbers to find the mean value: ");
    scanf("%f %f",&a,&b);
    m= AM(a,b);
    printf("The Arithmetic Mean is %f",m);
    return 0;
}
