#include <stdio.h>
float main ()
{
    float l,b,r,ar,pr,ac,cc;
    printf ("Enter the values of l,b and r\n");
    scanf ("%f %f %f",&l,&b,&r);
    ar = l * b;
    pr = 2 *(l+b);
    ac = 3.14 * (r*r);
    cc = 2 * 3.14 * r;
    printf ("Area of rectangle = %.2f\nPerimeter of rectangle = %.2f\nArea of circle = %.2f\nCircumference of circle = %.2f",ar,pr,ac,cc);
    return 0;
}
