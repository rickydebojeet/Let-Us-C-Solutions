#include <stdio.h>
int main()
{
    int arr[4][4], brr[4][4], i, j;
    for( i = 0 ; i < 4 ; i++ )
    {
        for( j = 0 ; j < 4 ; j++ )
        {
            printf( "Enter arr[%d][%d] : ", i, j );
            scanf( "%d", &arr[i][j] );
        }
    }
     for( i = 0 ; i < 4 ; i++ )
    {
        for( j = 0 ; j < 4 ; j++ )
        {
            brr[j][i] = arr[i][j];
        }
    }
    for( i = 0 ; i < 4 ; i++ )
    {
        for( j = 0 ; j < 4 ; j++ )
        {
            printf( "%d ", brr[i][j] );
        }
        printf( "\n" );
    }
    return 0;
}
