#include <stdio.h>
int main()
{
    char ch;
    printf( "Enter any character : " );
    scanf( "%c", &ch );
    if( ch >= 65 && ch <= 90 )
        printf( "You have entered a Capital Letter." );
    else if( ch >= 97 && ch <= 122 )
        printf( "You have entered a small case letter." );
    else if( ch >= 48 && ch <= 57 )
        printf( "You have entered a digit. " );
    else
        printf( "You have entered a special symbol." );
    return 0;
}
