#include <stdio.h>
int main()
{
    int a,b,product;
    product = 1;
    printf ("Enter the two number : ");
    scanf ("%d %d",&a,&b);
    while (b>0)
    {
        product = product * a;
        b--;
    }
    printf ("The result is\n%d",product);
    return 0;
}
