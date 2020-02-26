#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,n,q,a;
    for(int i=1;i<=10;i++)
    {
        printf("Enter the values of p,r,n & q\n");
        scanf("%f %f %f %f",&p,&r,&n,&q);
        a=p*pow((1+(r/q)),(n*q));
        printf("a=%f\n",a);
    }
    return 0;
}
