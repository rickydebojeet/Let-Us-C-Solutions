#include<stdio.h>
void test(int);
int main()
{
    int num;
    printf("Enter the value of the year = ");
    scanf("%d",&num);
    test(num);
    return 0;
}
void test(int x)
{
    int t;
    t=x%4;
    if(t==0)
        printf("The year is a leap year.");
    else
        printf("The year is not a leap year.");
}
