#include<stdio.h>
#define TEST(x,y) (x>y)
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    if TEST(a,b)
        printf("%d is greater than %d",a,b);
    else
        printf("%d is greater than %d",b,a);
    return 0;
}
