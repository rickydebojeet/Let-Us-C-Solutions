#include<stdio.h>
int main()
{
    int c,d,x;
    printf("Enter first no. in C\n");
    scanf("%d",&c);
    printf("Enter the second number in D\n");
    scanf("%d",&d);
    x=c;
    c=d;
    d=x;
    printf("Swapped values are\nC=%d\nD=%d",c,d);
}
