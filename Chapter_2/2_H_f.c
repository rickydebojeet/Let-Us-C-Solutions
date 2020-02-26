#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,p,area;
    printf("Enter the lengths of the three sides of triangle.\n");
    scanf("%d %d %d",&a,&b,&c);
    p = (a+b+c)/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Area of the triangle = %d",area);
    return 0;
}
