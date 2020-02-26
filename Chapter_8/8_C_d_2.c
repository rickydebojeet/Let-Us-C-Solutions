#include<stdio.h>
#define ABSOLUTE(x) if(x<0)\
                    x=(-x);\
                    else\
                    x=x;
int main()
{
    int i;
    printf("Enter the value of the number: ");
    scanf("%d",&i);
    ABSOLUTE(i);
    printf("The Absolute value is %d",i);
    return 0;
}
