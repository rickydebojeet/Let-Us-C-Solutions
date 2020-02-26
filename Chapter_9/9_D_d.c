#include <stdio.h>
int main()
{
    int num[25], i, a = 0, p = 0, n = 0, e = 0, o = 0;
    for( i = 0 ; i < 25 ; i++ )
    {
        printf( "Enter the number[%d] : ", i );
        scanf( "%d", &num[i] );
    }
    for( i = 0 ; i < 25 ; i++ )
    {
        if( num[i] > 0 )
            p++;
        else
            n++;
        a = i % 2;
        if( a == 0 )
            e++;
        else
            o++;
    }
    printf( "The entered data has:\n%d Positive, %d Negative, %d Even and %d Odd numbers.", p, n, e, o );
    return 0;
}
