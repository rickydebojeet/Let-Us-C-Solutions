#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter the lengths of the sides of the triangle to check if it is valid\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c)
    {
        if(a<(b+c))
            printf("The triangle is valid.");
        else
            printf("The triangle is not valid.");
    }
    if (b>a&&b>c)
    {
        if(b<(a+c))
            printf("The triangle is valid.");
        else
            printf("The triangle is not valid.");
    }
    else
    {
        if(c<(a+b))
            printf("The triangle is valid.");
        else
            printf("The triangle is not valid.");
    }
    return 0;
}
