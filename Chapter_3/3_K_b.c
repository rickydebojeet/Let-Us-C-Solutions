#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year.\n");
    scanf("%d",&y);
    (y%4==0)?printf("The year is a leap year"):printf("The year is not a leap year");
    return 0;
}
