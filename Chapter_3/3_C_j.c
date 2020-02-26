#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the values of (x1,y1)\n");
    scanf("%d %d",&a,&b);
    printf("Enter the values of (x2,y2)\n");
    scanf("%d %d",&c,&d);
    printf("Enter the values of (x3,y3)\n");
    scanf("%d %d",&e,&f);
    if (((d-b)/(c-a))&&((f-d)/(e-c))&&((f-b)/(e-a)))
        printf("They fall in the same line.");
    else
        printf("They don't fall in the same line.");
    return 0;
}
