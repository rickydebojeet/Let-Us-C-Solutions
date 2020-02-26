/*Calculating Gross Salary*/
#include <stdio.h>
int main()
{
    float bas,ren,all,tot ;
    printf ("Enter Base Salary\n") ;
    scanf ("%f",&bas) ;
    all = 0.4 * bas ;
    ren = 0.2 * bas ;
    tot = all + ren + bas ;
    printf ("Total Gross Salary = %f\n",tot) ;
    return 0 ;
}
