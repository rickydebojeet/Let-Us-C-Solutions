#include <stdio.h>
int main ()
{
    int num,div = 0;
    printf ("Enter any integer\n");
    scanf ("%d",&num);
    div = num%2;
    if (div == 0)
        printf ("The number is even");
    else
        printf ("The number is odd");
    return 0;
}
