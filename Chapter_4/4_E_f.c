#include<stdio.h>
int main()
{
    int n,i,p=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        p=n*i;
        printf("%d*%d=%d\n",n,i,p);
    }
    return 0;
}
