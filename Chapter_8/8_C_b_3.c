#include<stdio.h>
#define TEST(x) ((x>=65&&x<=90)||(x>=97&&x<=122))
int main()
{
    char ch;
    printf("Enter the character to test: ");
    scanf("%c",&ch);
    if(TEST(ch))
        printf("You have entered a letter.\n");
    else
        printf("You haven't entered a letter.\n");
    return 0;
}
