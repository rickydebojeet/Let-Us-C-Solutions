#include <stdio.h>
int main()
{
    int num, r, sum = 0;
    printf( "Enter the value of the number : " );
    scanf( "%d", &num );
    while( num > 0 ) {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    printf( "The sum of the digits is %d.", sum );
    return 0;
}
