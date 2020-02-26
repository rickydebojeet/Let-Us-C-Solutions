#include<stdio.h>
void unit(int);
void tenth(int);
void hundred(int);
void thousand(int);
int main()
{
    int i,num,a[4],n=0;
    printf("Enter the value of year=");
    scanf("%d",&num);
    for(i=1000;i>=10;i/=10,n++)
    {
        a[n]=num/i;
        num=num%i;
    }
    a[3]=num;
    thousand(a[0]);
    hundred(a[1]);
    tenth(a[2]);
    unit(a[3]);
}
void unit(int x)
{
    if(x<=3)
    {
        for(int i=1;i<=x;i++)
            printf("I");
    }
    else if(x==4)
        printf("IV");

    else if(x>=5&&x<=8)
        printf("V");
    if(x>=6&&x<=8)
    {
        for(int i=1;i<=x-5;i++)
            printf("I");
    }
    else if(x==9)
        printf("IX");
}
void tenth(int x)
{
    if(x<=3)
    {
        for(int i=1;i<=x;i++)
            printf("X");
    }
    else if(x==4)
        printf("XL");

    else if(x>=5&&x<=8)
        printf("L");
    if(x>=6&&x<=8)
    {
        for(int i=1;i<=x-5;i++)
            printf("X");
    }
    else if(x==9)
        printf("XC");
}
void hundred(int x)
{
    if(x<=3)
    {
        for(int i=1;i<=x;i++)
            printf("C");
    }
    else if(x==4)
        printf("CD");

    else if(x>=5&&x<=9)
        printf("D");
    if(x>=6&&x<=9)
    {
        for(int i=1;i<=x-5;i++)
            printf("C");
    }
}
void thousand(int x)
{
    if(x==1)
        printf("M");
    else if(x==2)
        printf("MM");
}
