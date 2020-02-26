#include <stdio.h>
int main()
{
    int num, r, ans = 0;
    printf( "Enter the value of the number : " );
    scanf( "%d", &num );
    while( num > 0 ) {
        r = num % 10;
        ans = ans * 10 + r;
        num = num / 10;
    }
    printf( "The reversed number is %d.", ans );
    return 0;
}
