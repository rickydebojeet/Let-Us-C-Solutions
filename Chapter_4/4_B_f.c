#include <stdio.h>
int main()
{
    int t = 21, user;
    printf( "Let's play a game!!\nThe rules are as follows :\n" );
    printf( "1.There are 21 matchsticks.\n2.Pick 1, 2, 3 or 4 matchsticks.\n3.Then computer will pick.\n4.Whoever has the last match stick loses the game.\n" );
    while( t > 1 )
    {
        printf( "Enter your choice : " );
        scanf( "%d", &user );
        printf( "Computer choses : %d\n", (5 - user) );
        t -= 5;
        printf( "Matchsticks left : %d\n", t );
    }
    printf( "You have the last matchstick.\nYOU LOSE!!!!!" );
    return 0;
}
