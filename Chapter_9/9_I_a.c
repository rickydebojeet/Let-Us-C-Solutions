#include <stdio.h>
void cop( int*, int*, int );
int main()
{
    int a[100], b[100], n, i;
    printf( "Enter the no. of elements in the array (max 100) : " );
    scanf( "%d", &n );
    for( i = 0 ; i < n ; i++ )
    {
        printf( "Enter a[%d] : ", i );
        scanf( "%d", &a[i] );
    }
    cop( a, b, n );
    for( i = 0 ; i < n ; i++ )
    {
        printf( "b[%d] : %d\n", i, b[i] );
    }
    return 0;
}
void cop( int* p, int* q, int r )
{
    int a, b;
    for( a = r - 1, b = 0 ; b < r ; a--, b++ )
    {
        *( q + b ) = *( p + a );
    }
}
