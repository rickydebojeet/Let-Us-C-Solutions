#include <stdio.h>
int main()
{
    int a[25], i, min;
    for( i = 0 ; i < 25 ; i++ )
    {
        printf( "Enter a[%d] : ", i );
        scanf( "%d", &a[i] );
    }
    min = *a;
    for( i = 1 ; i < 25 ; i++ )
    {
        if( *( a + i ) < min )
            min = *( a + i );
    }
    printf( "The smallest number is %d.", min );
    return 0;
}
