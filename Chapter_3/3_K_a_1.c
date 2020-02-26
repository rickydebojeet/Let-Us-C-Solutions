#include <stdio.h>
int main ()
{
    char n;
    printf("Enter character\n");
    scanf("%c",&n);
    ((n<=122&&n>=97)?printf("The character is a lower case alphabet"):printf("The character is not a lower case alphabet"));
    return 0;
}
