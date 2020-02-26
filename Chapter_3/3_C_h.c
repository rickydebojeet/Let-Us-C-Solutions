#include <stdio.h>
int main ()
{
    int num,abs,l;
    printf("Enter the number\n");
    scanf("%d",&num);
    if (num>=0)
        abs = num;
    else
    {
        l = -num;
        abs = l;
    }
    printf("The absolute value is = %d",abs);
    return 0;
}
