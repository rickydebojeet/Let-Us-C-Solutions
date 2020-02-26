#include <stdio.h>
int main()
{
    int cp,sp,p,l;
    printf ("Enter cost price and selling price\n");
    scanf ("%d %d",&cp,&sp);
    if (sp>cp)
    {
        p = sp - cp;
        printf ("Profit\nAnd the profit is\n%d",p);
    }
    else
    {
        l = cp - sp;
        printf ("Loss\nAnd the loss is\n%d",l);
    }
    return 0;
}
