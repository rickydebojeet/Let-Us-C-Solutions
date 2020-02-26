#include <stdio.h>
int main ()
{
    int year,div ;
    printf ("Enter the year\n") ;
    scanf ("%d",&year) ;
    div = year % 4 ;
    if (year>0&&div==0)
        printf ("The year is a leap year\n");
    else
        printf ("This year is not a leap year\n");
    return 0 ;
}
