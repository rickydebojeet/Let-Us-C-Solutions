#include <stdio.h>
int main ()
{
    int year,div;
    printf ("Enter the year\n");
    scanf ("%d",&year);
    div = year%4;
    if ( div == 0 )
        printf ("The year is a leap year");
    else
        printf ("The year is not a leap year");
    return 0 ;
}
