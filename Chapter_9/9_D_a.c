#include<stdio.h>
int check(int,int);
int main()
{
    int a[25],se,no=0;
    for(int i=0;i<=24;i++)
    {
        printf("Enter the value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the value to check:");
    scanf("%d",&se);
    for(int i=0;i<=24;i++)
    {
        no = no + check(a[i],se);
    }
    if(no==0)
        printf("The element is not present in the array.");
    else
        printf("The element is present in the array and is present %d times.",no);
    return 0;
}
int check(int p,int q)
{
    if(p==q)
        return 1;
    else
        return 0;
}
