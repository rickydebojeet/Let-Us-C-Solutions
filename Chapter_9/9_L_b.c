#include <stdio.h>
int main()
{
    int arr[5][5], i, j, max;
    for( i = 0 ; i < 5 ; i++ )
    {
        for( j = 0 ; j < 5 ; j++ )
        {
            printf( "Enter arr[%d][%d] : ", i, j );
            scanf( "%d", &arr[i][j] );
        }
    }
    max = arr[0][0];
    for( i = 0 ; i < 5 ; i++ )
    {
        for( j = 0 ; j < 5 ; j++ )
        {
            if( arr[i][j] > max )
                max = arr[i][j];
        }
    }
    printf( "The largest number is : %d.", max );
    return 0;
}
