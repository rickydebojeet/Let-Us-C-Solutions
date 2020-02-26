#include <stdio.h>
int main ()
{
    int i, time, bonus;
    i=1;
    while (i<=10)
    {
        printf ("Enter the working time\n");
        scanf ("%d",&time);
        if (time>40)
        {
            bonus = (time - 40) * 12;
            printf ("Bonus = %d\n",bonus);
        }
        else
            printf ("Not eligible for bonus\n");
        i++;
    }
    return 0;
}
