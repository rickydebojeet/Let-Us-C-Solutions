#include<stdio.h>
int main()
{
    int i;
    float t1=1,t2=1,s=0;
    for(i=1;i<=7;i++)
    {
        t1=t1*i;
        t2=i/t1;
        s=s+t2;
    }
    printf("The sum is = %f",s);
    return 0;
}
