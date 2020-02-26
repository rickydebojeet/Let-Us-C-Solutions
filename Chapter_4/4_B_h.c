#include<stdio.h>
int main()
{
    int i,r,o1,o2;
    o1=0;o2=0;
    printf("Enter the no.\n");
    scanf("%d",&i);
    while(i>0)
    {
        r=i%8;
        i=i/8;
        o1=r+o1*10;
    }
    while(o1>0)
    {
        r=o1%10;
        o1=o1/10;
        o2=r+o2*10;
    }
    printf("The octal equivalent is %d",o2);
    return 0;
}
