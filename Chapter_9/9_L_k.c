#include <stdio.h>
void shift( int* );
int main()
{
    int a[5], i;
    printf( "Enter the values :\n" );
    for( i = 0 ; i < 5 ; i++ )
    {
        printf( "Enter a[%d] : ", i );
        scanf( "%d", &a[i] );
    }
    shift( a );
    printf( "\n\nAfter shifting :\n" );
    for( i = 0 ; i < 5 ; i++ )
    {
        printf( "%d ", a[i] );
    }
    return 0;
}
void shift( int* a )
{
    int tmp1 = 0, tmp2 = 0, *b ;
    b = a;
    tmp1 = *( a );
    tmp2 = *( a + 1 );
    *( b ) = *( a + 2 );
    *( b + 1 ) = *( a + 3 );
    *( b + 2 ) = *( a + 4 );
    *( b + 3 ) = *( a + 5 );
    *( b + 4 ) = tmp1;
    *( b + 5 ) = tmp2;
}
