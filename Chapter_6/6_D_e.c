#include<stdio.h>
void prime(int);
void test(int);
int main()
{
    int num;
    printf("Enter the value of the number = ");
    scanf("%d",&num);
    printf("The prime factors are:\n");
    test(num);
    return 0;
}
void test(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
        printf("%d\n",x);
    else
        prime(x);
}
void prime(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            test(i);
            x=x/i;
            if(x!=1)
                test(x);
            break;
        }
    }
}
