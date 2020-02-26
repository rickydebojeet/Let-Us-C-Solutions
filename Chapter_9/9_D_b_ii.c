//Bubble Sort
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
    for(int i=23;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            sort((p+j),(p+j+1));
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
