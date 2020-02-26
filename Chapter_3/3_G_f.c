#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the value of the lengths of the triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b&&b==c)
        printf ("The triangle is equilateral triangle.");
    else if (a==b||b==c)
        printf ("The triangle is isosceles triangle.");
    else if (a==sqrt(pow(b,2)+pow(c,2))||b==sqrt(pow(a,2)+pow(c,2))||c==sqrt(pow(a,2)+pow(b,2)))
        printf ("The triangle is right angled triangle.");
    else
        printf ("The triangle is scalene triangle.");
    return 0;
}
