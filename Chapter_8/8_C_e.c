#include<stdio.h>
#include"interest.h"
int main()
{
    float p,r,t,a,i;
    printf("Enter the value of p,r,t: ");
    scanf("%f %f %f",&p,&r,&t);
    a= AMOUNT(p,r,t);
    i= INTER(p,r,t);
    printf("The Final Amount is %f and the interest is %f",a,i);
    return 0;
}
