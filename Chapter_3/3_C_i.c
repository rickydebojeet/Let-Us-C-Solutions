#include <stdio.h>
int main()
{
    int l,b,area,peri;
    printf("Please enter the values of l and b\n");
    scanf("%d %d",&l,&b);
    area = l*b;
    peri = 2 *(l+b);
    if (area>peri)
        printf("Area %d is greater than perimeter %d.",area,peri);
    else
        printf("Area %d is lesser than perimeter %d.",area,peri);
    return 0;
}
