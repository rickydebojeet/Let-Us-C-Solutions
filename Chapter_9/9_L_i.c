#include <stdio.h>
int main()
{
    int a[6][6], b[6][6], c[6][6], i, j;
    for( i = 0 ; i < 6 ; i++ )
    {
        for( j = 0 ; j < 6 ; j++ )
        {
            printf( "Enter a[%d][%d] : ", i, j);
            scanf( "%d", &a[i][j] );
            printf( "Enter b[%d][%d] : ", i, j);
            scanf( "%d", &b[i][j] );
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf( "\nThe sum is :\n" );
    for( i = 0 ; i < 6 ; i++ )
    {
        for( j = 0 ; j < 6 ; j++ )
        {
            printf( "%d ", c[i][j] );
        }
        printf( "\n" );
    }
    return 0;
}
