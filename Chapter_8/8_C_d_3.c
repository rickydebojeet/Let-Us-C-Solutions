#include<stdio.h>
#define TEST(x) if(x>=65&&x<=90)\
                x=x+32;\
                else\
                x=x;
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    TEST(ch);
    printf("The result is %c",ch);
    return 0;
}
