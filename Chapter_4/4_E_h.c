#include<stdio.h>
int main()
{
    int num=1;
    for(int row=1;row<=4;row++)
    {
        for(int gap=1;gap<=4-row;gap++)
        {
            printf(" ");
        }
        for(int ele=1;ele<=row;ele++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
