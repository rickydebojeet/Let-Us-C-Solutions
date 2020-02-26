#include <stdio.h>
int main()
{
    int i,factorial;
    factorial = 1;
    printf ("Enter the number : ");
    scanf ("%d",&i);
    while (i>0)
    {
        factorial = factorial*i;
        i--;
    }
    printf ("Factorial of the number is : %d",factorial);
    return 0;
}
