#include <stdio.h>
#include <math.h>
int main()
{
    int num = 1, u = 0, t = 0, h = 0, a;
    while( num <= 500 )
    {
        if( num <= 9 )
        {
            u = num;
        }
        else if( num <= 99 )
        {
            t = num / 10;
            u = num % 10;
        }
        else
        {
            h = num / 100;
            t = ( num % 100 ) / 10;
            u = num % 10;
        }
        a = ( pow( u, 3 ) + pow( t, 3 ) + pow( h, 3 ) );
        if( a == num )
            printf( "%d\n", num );
        num++;
    }
    return 0;
}
