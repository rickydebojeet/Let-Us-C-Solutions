#include <stdio.h>
#define FALSE 0
#define TRUE 1
int main()
{
    int arr[100][100], brr[100][100], i, j, n, flag = TRUE;
    printf( "Enter the no. of rows and columns : " );
    scanf( "%d", &n );
    for( i = 0 ; i < n ; i++ )
    {
        for( j = 0 ; j < n ; j++ )
        {
            printf( "Enter arr[%d][%d] : ", i, j );
            scanf( "%d", &arr[i][j] );
        }
    }
    for( i = 0 ; i < n ; i++ )
    {
        for( j = 0 ; j < n ; j++ )
        {
            brr[j][i] = arr[i][j];
        }
    }
    for( i = 0 ; i < n ; i++ )
    {
        for( j = 0 ; j < n ; j++ )
        {
            if( arr[i][j] != brr[i][j] )
            {
                flag = FALSE;
            }
        }
    }
    if( flag == TRUE )
        printf( "The matrix is Symmetric." );
    else if ( flag == FALSE )
        printf( "The matrix is not Symmetric." );
    return 0;
}
