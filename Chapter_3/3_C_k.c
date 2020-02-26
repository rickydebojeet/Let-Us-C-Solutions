#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, a, b, r, l;
    printf( "Enter the co-ordinates of the center : " );
    scanf( "%d %d", &x, &y );
    printf( "Enter the radius of the circle : " );
    scanf( "%d", &r );
    printf( "Enter the co-ordinates of the point : " );
    scanf( "%d %d", &a, &b );
    l = sqrt( (pow( (x - a), 2) ) +  (pow( (y - b), 2) ) );
    if( l > r )
        printf( "The point is outside the circle.\n" );
    else if( l == r )
        printf( "The point is on the circle.\n" );
    else
        printf( "The point is inside the circle.\n" );
    return 0;

}
