#include <stdio.h>
int main()
{
    int num, u, t, h, th, tth;
    printf( "Enter the number to perform operation : " );
    scanf( "%d", &num );
    tth = num / 10000;
    th = ( num % 10000 ) / 1000;
    h = ( num % 1000 ) / 100;
    t = ( num % 100 ) / 10;
    u = ( num % 10 );
    tth++;
    th++;
    h++;
    t++;
    u++;
    if( u >= 10 )
    {
        u = u % 10;
        t++;
    }
    if( t >= 10 )
    {
        t = t % 10;
        h++;
    }
    if( h >= 10 )
    {
        h = h % 10;
        th++;
    }
    if( th >= 10 )
    {
        th = th % 10;
        tth++;
    }
    printf( "The result is : %d%d%d%d%d", tth, th, h, t, u );
    return 0;
}
