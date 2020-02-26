#include <stdio.h>
void swapr( int*, int* );
int main()
{
    int a[10], i;
    for( i = 0 ; i < 10 ; i++ )
    {
        printf( "Enter a[%d] : ", i );
        scanf( "%d", &a[i] );
    }
    for( i = 0 ; i < 9 ; i += 2 )
    {
        swapr( a + i , a + i + 1 );
    }
    for( i = 0 ; i < 10 ; i++ )
    {
        printf( "a[%d] : %d\n", i, a[i] );
    }
    return 0;
}
void swapr( int* a, int* b )
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
