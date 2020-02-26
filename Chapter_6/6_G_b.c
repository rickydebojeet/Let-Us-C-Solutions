#include<stdio.h>
void calc(float*,float*);
int main()
{
    float av,p;
    char c=37;
    printf("Enter the marks of the 3 subjects : ");
    calc(&av,&p);
    printf("The average marks is %.2f and percentage is %.2f%c",av,p,c);
    return 0;
}
void calc(float *x,float *y)
{
    int a,b,c;
    float av,p;
    scanf("%d %d %d",&a,&b,&c);
    av=(a+b+c)/3;
    p=(a+b+c)/3;
    *x=av;
    *y=p;
}
