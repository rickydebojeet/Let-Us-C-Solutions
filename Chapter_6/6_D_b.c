#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
    int a,b,c;
    printf("Enter the values of a,b:");
    scanf("%d %d",&a,&b);
    c=power(a,b);
    printf("%d raised to the power of %d is %d.\n",a,b,c);
    return 0;
}
int power(int x,int y)
{
    int z;
    z=pow(x,y);
    return (z);
}
