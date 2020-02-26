#include <stdio.h>
int main()
{
    int a[100], n, i, j;
    printf( "Enter the no. of elements in the array (max 100) : " );
    scanf( "%d", &n );
    for( i = 0 ; i < n ; i++ )
    {
        printf( "Enter a[%d] : ", i );
        scanf( "%d", &a[i] );
    }
    for( i = 0, j = n - 1 ; i < n ; i++, j-- )
    {
        if( a[i] != a[j] )
        {
            printf( "The array is not palindrome." );
            break;
        }
        if( j == 0 )
            printf( "The array is palindrome." );
    }
    return 0;
}
