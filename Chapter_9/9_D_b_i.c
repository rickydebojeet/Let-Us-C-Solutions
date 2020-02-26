//Selection Sort
#include<stdio.h>
void looper(int *);
void sort(int *,int *);
int main()
{
    int a[25];
    for(int i=0;i<=24;i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    looper(a);
    for(int i=0;i<=24;i++)
    {
        printf("Value of a[%d] is %d\n",i,a[i]);
    }
}
void looper(int *p)
{
    for(int i=0;i<=23;i++)
    {
        for(int j=(i+1);j<=24;j++)
        {
            sort((p+i),(p+j));
        }
    }
}
void sort(int *a,int *b)
{
    int tmp;
    if((*a)>(*b))
    {
        tmp=*a;
        *a=*b;
        *b=tmp;
    }
}
