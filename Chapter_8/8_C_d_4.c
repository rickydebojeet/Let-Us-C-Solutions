#include<stdio.h>
#define TEST(x,y) if(x>y)\
        printf("%d is greater than %d",x,y);\
    else\
        printf("%d is greater than %d",y,x);
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    TEST(a,b);
    return 0;
}
