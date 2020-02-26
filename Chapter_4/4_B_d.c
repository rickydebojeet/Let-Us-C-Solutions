#include <stdio.h>
int main()
{
    char ch;
    ch = 0;
    for( int i = 0 ; i <= 255 ; i++, ch++ )
        printf( "%d = %c\n", i, ch );
    return 0;
}
