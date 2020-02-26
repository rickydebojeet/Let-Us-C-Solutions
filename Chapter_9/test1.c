#include<stdio.h>
int main()
{
    int marks[]={10,20,30,40,50,60,70};
    int *i,*j;
    i=&marks[1];
    j=&marks[5];
    printf("%d %d\n",j-i,*j-*i);
    return 0;
}
