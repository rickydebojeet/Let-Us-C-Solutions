#include <stdio.h>
int main()
{
    int dig,o,th,s ;
    printf ("Enter the four digit number\n");
    scanf ("%d",&dig);
    th = dig / 1000 ;
    o = (dig % 10) ;
    s = th + o ;
    printf ("The sum of the first and last digit is \n%d",s) ;
    return 0 ;
}
