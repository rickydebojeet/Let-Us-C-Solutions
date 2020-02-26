//Created by Ricky on 11/01/2019
//Puzzle game
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//Macros
#define TRUE 1
#define FALSE 0
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

//Provided in Text Book
void gotoxy( short , short );
int getkey();

//User defined function
void box( short , short, short, short );
void update( short, short, short, short, int* a );
int check( int* a );
int action( int, int a[4][4], int );
void swap( int* , int* );
void refresh( int* );

int main()
{
    int a[4][4] =
    {
         1, 4, 15, 7,
         8, 10, 2, 11,
         14, 3, 6, 13,
         12, 9, 5, 35
    };
    int key, player, tmp, max, win, num[5], flag;

    //Introduction
    printf( "Welcome to Puzzle Game.\nPress Any Key To Continue.....\n" );
    getch();
    system( "cls" );
    printf( "Fifteen numbered pieces are arranged and they can be moved horizontally and vertically.\n" );
    printf( "There is one blank at the bottom right corner.\nUse arrow keys to move the blank till " );
    printf( "the numbers aren't arranged in ascending order.\nPress Any Key To Continue.....\n" );
    getch();
    system( "cls" );
    printf( "Enter no. of players (Max 5) : " );
    scanf( "%d", &player );
    system( "cls" );

    //Player Loop
    for( int i = 0 ; i < player ; i++ )
    {
        tmp = 0;
        flag = FALSE;
        printf( "Player %d's Turn.\nPress Any Key To Continue.....\n", i+1 );
        getch();
        system( "cls" );
        box( 0, 0, 40, 16 );
        while( flag == FALSE )//Game ends when flag becomes TRUE
        {
            update( 0, 0, 40, 16, (int*)a );//Prints the number. Pointer to an array
            gotoxy( 0, 20 );
            printf( "Moves : %d", tmp );
            key = getkey();
            tmp = action( key, a, tmp );//It moves the numbers
            flag = check( (int*)a );//It make flag TRUE on completion of game
        }
        update( 0, 0, 40, 16, (int*)a );
        num[i] = tmp;
        gotoxy( 0, 20 );
        printf( "You WON!!!!....Total moves = %d.....Press any key to continue...", num[i] );
        getch();
        system( "cls" );
        refresh( (int*)a );
    }

    printf( "Final Moves List\n\n" );
    for( int i = 0 ; i < player; i++ )
    {
        printf( "Player %d = %d\n", i + 1, num[i] );
    }
    max = num[0];
    for( int i = 0 ; i < player ; i++ )
    {
        if( num[i] > max )
        {
            max = num[i];
            win = i + 1;
        }
    }
    printf( "Player %d won the match.\nPress any key to quit..." );
    getch();
    system( "cls" );
    return 0;
}
void gotoxy( short col, short row )
{
    HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
    COORD position = { col, row };
    SetConsoleCursorPosition( h, position );
}
int getkey()
{
    int ch;
    ch = getch();
    if ( ch == 0 )
    {
        ch = getch();
        return ch;
    }
    return ch;
}
//It draws box.
void box( short x1, short y1, short x2, short y2 )
{
    int i, j;
    for( i = x1 ; i <= x2 ; i++ )
    {
        for( j = y1 ; j <= y2 ; j++ )
        {
            //For printing corners//
            if( i == x1 && j == y1 )
            {
                gotoxy( i, j );
                printf( "%c", 218 );
            }
            if( i == x2 && j == y1 )
            {
                gotoxy( i, j );
                printf( "%c", 183 );
            }
            if( i == x1 && j == y2 )
            {
                gotoxy( i, j );
                printf( "%c", 212 );
            }
            if( i == x2 && j == y2 )
            {
                gotoxy( i, j );
                printf( "%c", 188 );
            }
            //-------------------------//
            if( i > x1 && i < x2 )
            {
                //Vertical Division corners//
                if( i % 10 == 0 )
                {
                    if( j == y1 )//T shape
                    {
                        gotoxy( i, j );
                        printf( "%c", 194 );
                    }
                    if( j == y2 )//Inverse T shape
                    {
                        gotoxy( i, j );
                        printf( "%c", 190 );
                    }
                    if(  j == y1 + 4 || j == y1 + 8 || j == y1 + 12 )//+ shape
                    {
                        gotoxy( i, j );
                        printf( "%c", 197 );
                    }
                    //-------------------------//
                }
                else if( j % 4 == 0 )//Horizontal line
                {
                    if( j == y2 )
                    {
                        gotoxy( i, j );
                        printf( "%c", 205 );
                    }
                    else
                    {
                        gotoxy( i, j );
                        printf( "%c", 196 );
                    }
                }
            }
            if( j > y1 && j < y2 )
            {
                //Horizontal Division corners//
                if( j % 4 == 0 )
                {
                    if( i == x1 )//AntiClockwise T Shape
                    {
                        gotoxy( i, j );
                        printf( "%c", 195 );
                    }
                    if( i == x2 )//Clockwise T Shape
                    {
                        gotoxy( i, j );
                        printf( "%c", 182 );
                    //-----------------------//
                    }
                }
                else if( i % 10 == 0 )//Vertical Line
                {
                    if( i == x2 )
                    {
                        gotoxy( i, j );
                        printf( "%c", 186 );
                    }
                    else
                    {
                        gotoxy( i, j );
                        printf( "%c", 179 );
                    }
                }

            }
        }
    }
}
void update( short x1, short y1, short x2, short y2, int* a )
{
    int i, j, num, k = 0;
    for( j = y1 ; j < y2 ; j++ )
    {
        for( i = x1 ; i < x2 ; i++ )
        {
            if( i > x1 && i < x2 && j > y1 && j < y2 )
            {
                if( ( i + 5 ) % 10 == 0 && ( j + 2 ) % 4 == 0 )
                {
                    gotoxy( i, j );
                    num = a[k];
                    if( num == 35 )
                    {
                        printf( "  " );
                    }
                    else
                    {
                        printf( "%d", num );
                    }
                    k++;
                }
            }
        }
    }
}
int check( int* a )
{
    int i;
    for( i = 0 ; i < 15 ; i++ )
    {
        if( a[i] > a[i+1] )
            return FALSE;
    }
    return TRUE;
}
int action( int key, int a[4][4], int tmp )
{
    int i, j;
    for( i = 0 ; i < 4 ; i++ )
    {
        for( j = 0 ; j < 4 ; j++ )
        {
            if( a[i][j] == 35 )
                goto BREAK;
        }
    }
    BREAK:
    switch ( key )
    {
    case RIGHT:
		if ( j - 1 < 0 )
			return tmp;
		swap( &a[i][j], &a[i][j - 1] );/*Moves the button to right*/
		tmp++;
		return tmp;
	case DOWN:
		if ( i - 1 < 0 )
			return tmp;
		swap( &a[i][j], &a[i - 1][j] );/*Moves the button down*/
		tmp++;
		return tmp;
	case LEFT:
		if ( j + 1 > 3 )
			return tmp;
		swap( &a[i][j], &a[i][j + 1] );/*Moves the button left*/
		tmp++;
		return tmp;
	case UP:
		if ( i + 1 > 3 )
			return tmp;
		swap( &a[i][j], &a[i + 1][j] );/*Moves the button up*/
		tmp++;
		return tmp;
	default:
		return tmp;
	}
}
void swap( int *a, int *b )
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void refresh( int* a )
{
    *( a ) = 1;
    *( a + 2 ) = 4;
    *( a + 3 ) = 15;
    *( a + 4 ) = 7;
    *( a + 5 ) = 8;
    *( a + 6 ) = 10;
    *( a + 7 ) = 2;
    *( a + 8 ) = 11;
    *( a + 9 ) = 14;
    *( a + 10 ) = 3;
    *( a + 11 ) = 6;
    *( a + 12 ) = 13;
    *( a + 13 ) = 12;
    *( a + 14 ) = 9;
    *( a + 15 ) = 5;
    *( a + 16 ) = 35;
}
