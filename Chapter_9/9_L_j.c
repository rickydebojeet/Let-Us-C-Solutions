#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k, sum;
    printf( "For the first matrix : \n" );
    for( i = 0 ; i < 3 ; i++ )
    {
        for( j = 0 ; j < 3 ; j++ )
        {
            printf( "Enter a[%d][%d] : ", i, j );
            scanf( "%d", &a[i][j] );
        }
    }
    printf( "\nFor the second matrix : \n" );
    for( j = 0 ; j < 3 ; j++ )
    {
        for( k = 0 ; k < 3 ; k++ )
        {
            printf( "Enter b[%d][%d] : ", j, k );
            scanf( "%d", &b[j][k] );
        }
    }
    for( i = 0 ; i < 3 ; i++ )
    {
        for( k = 0 ; k < 3 ; k++ )
        {
            sum = 0;
            for( j = 0 ; j < 3 ; j++ )
            {
                sum += ( a[i][j] * b[j][k] );
            }
            c[i][k] = sum;
        }
    }
    printf( "\n\nThe matrix multiplication is : \n" );
    for( i = 0 ; i < 3 ; i++ )
    {
        for( k = 0 ; k < 3 ; k++ )
        {
            printf( "%d ", c[i][k] );
        }
        printf( "\n" );
    }
    return 0;
}
