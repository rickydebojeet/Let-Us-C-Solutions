#include<stdio.h>
int main()
{
    int y,alt,inv;
    alt=1;inv=0;
    for(y=1;alt>=inv;y++)
    {
        inv=(y*1000)-4000;
        alt=y*90;
    }
    printf("No. of years = %d",y);
    return 0;
}
