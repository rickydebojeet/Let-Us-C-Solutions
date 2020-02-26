#include <stdio.h>
int main()
{
    int a = 1189 , b = 841;
    printf( "A0 = %d X %d\n", a, b );
    for( int i = 1 ; i <= 8 ; i++ )
    {
        if( a > b )
            a = a/2;
        else
            b = b/2;
        printf( "A%d = %d X %d\n", i, a, b );
    }
    return 0;
}
