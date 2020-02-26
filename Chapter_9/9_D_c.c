#include <stdio.h>
int main()
{
    int num[100], i, a, b;
    for( i = 0 ; i <= 99 ; i++ )
    {
        num[i] = i + 1;
    }
    for( i = 1 ; i <= 99 ; i++ )
    {
        if( num[i] == 0 )
            continue;
        else
        {
            for( a = ( i + 2 ) ; a <= 100 ; a++ )
            {
                b = num[a] % num[i];
                if( b == 0 )
                    num[a] = 0;
            }
        }
    }
    for( i = 0 ; i <= 99 ; i++ )
    {
        if( num[i] == 0 )
            continue;
        else
            printf( "%d ", num[i] );
    }
    return 0;
}
