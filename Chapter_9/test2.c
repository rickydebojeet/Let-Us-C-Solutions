#include<stdio.h>
int main()
{
    int marks[]={10,20,30,40,50,60,70};
    int i;
    for(i=0;i<=6;i++)
    {
        printf("element no. %d ",i);
        printf("address is %u\n",&marks[i]);
    }
    return 0;
}
