#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("Enter the number:");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial of the number %d is %d.",n,f);
    return 0;
}
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f=f*i;
    }
    return (f);
}
