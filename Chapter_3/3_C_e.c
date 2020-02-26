#include <stdio.h>
#include <conio.h>
int main ()
{
    int num,s,i,d,l;
    s = 0;
    printf ("Please enter the number\n");
    scanf ("%d",&num);
    l = num;
    while (num!=0)
    {
        d = num%10;
        s = s*10 + d;
        num = num/10;
    }
    if (s==l)
        printf("The reverse of no. is = %d and it is equal to = %d.",s,l);
    else
        printf("The reverse of no. is = %d and it is not equal to = %d.",s,l);
    return 0;
}
