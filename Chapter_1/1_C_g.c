#include <stdio.h>
int main ()
{
    int sp,p,cp;
    printf("Please enter the total selling price and profit of the 15 items.\n");
    scanf ("%d %d",&sp,&p);
    cp = (sp - p)/15;
    printf ("Cost price of one item = %d",cp);
    return 0;
}
