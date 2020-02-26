#include <stdio.h>
int main()
{
    int num, i, z = 0, n = 0, p = 0;
    do
    {
        printf( "Enter the number : " );
        scanf( "%d", &num );
        if( num == 0 )
            z++;
        else if( num < 0 )
            n++;
        else if( num > 0 )
            p++;
        printf( "Do you want to continue? 0 or 1\n" );
        scanf( "%d", &i );
    }while( i == 1 );
    printf( "The entered number has :\n" );
    printf( "%d positive nos., %d negative nos. and %d zeros.\n", p, n, z );
    return 0;
}
