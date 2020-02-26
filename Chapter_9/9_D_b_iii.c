#include<stdio.h>
int main()
{
    int a[25],i,j,tmp;
    for(int i=0;i<=24;i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for ( i=1 ; i<25 ; i++)
    {
        tmp = a[i];
        j = i-1;
        while (j >=0 && a[j]>tmp)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = tmp;
    }
    for(int i=0;i<=24;i++)
    {
        printf("Value of a[%d] is %d\n",i,a[i]);
    }
}
