#include <stdio.h>
int main()
{
    int year,days,div;
    printf ("Enter the year\n");
    scanf ("%d",&year);
    days = year * 365 ;
    if ((year%4)==0)
        days = days + 1;
    div = days % 7 ;
    if (div==0)
        printf ("The 1st day is Monday");
    if (div==1)
        printf ("The 1st day is Tuesday");
    if (div==2)
        printf ("The 1st day is Wednesday");
    if (div==3)
        printf ("The 1st day is Thursday");
    if (div==4)
        printf ("The 1st day is Friday");
    if (div==5)
        printf ("The 1st day is Saturday");
    if (div==6)
        printf ("The 1st day is Sunday");
    return 0;
}
