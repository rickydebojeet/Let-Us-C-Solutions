#include<stdio.h>
#define TEST(x) (x>=97&&x<=122)
int main()
{
    char ch;
    printf("Enter the character to test: ");
    scanf("%c",&ch);
    if(TEST(ch))
        printf("You have entered a small case letter.\n");
    else
        printf("You haven't entered a small case letter.\n");
    return 0;
}
