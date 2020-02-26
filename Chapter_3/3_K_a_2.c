#include <stdio.h>
int main ()
{
    char n;
    printf("Enter character\n");
    scanf("%c",&n);
    (((n>90&&n<97)||(n<=255&&n>122)||(n>57&&n<65)||(n>48))?printf("The character is a special character"):printf("The character is not a special character"));
    return 0;
}
