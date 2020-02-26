#include <stdio.h>
int main()
{
    int h,f,t,fi,tw,o,a ;
    printf ("Enter the amount\n");
    scanf ("%d",&a);
    h = a / 100 ;
    f = (a % 100)/50 ;
    t = ((a % 100)- (50 * f)) / 10 ;
    fi = ((a%100) - (50*f) - (10*t)) / 5 ;
    tw = ((a%100) - (50*f) - (10*t) - (5*fi)) / 2 ;
    o = ((a%100) - (50*f) - (10*t) - (5*fi) - (2*tw)) / 1 ;
    printf ("Total Notes are = %d",h+f+t+fi+tw+o) ;
    return 0 ;
}
