#include <stdio.h>
void modify( int* );
int main()
{
    int a[10], i;
    for( i = 0 ; i < 10 ; i++ )
    {
        printf( "Enter a[%d] : ", i );
        scanf( "%d", &a[i] );
    }
    modify( a );
    for( i = 0 ; i < 10 ; i++ )
    {
        printf( "a[%d] : %d\n", i, a[i] );
    }
    return 0;
}
void modify( int* p )
{
    for( int i = 0 ; i < 10 ; i++ )
    {
        *( p + i ) *= 3;
    }
}
