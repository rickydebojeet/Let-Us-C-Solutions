#include<stdio.h>
int rec(int);
int nrec(int);
int main()
{
    int n,r,nr;
    printf("Enter the five digit number:");
    scanf("%d",&n);
    r=rec(n);
    nr=nrec(n);
    printf("The sum of the digits using recursive function = %d\n",r);
    printf("The sum of the digits using non-recursive function = %d",nr);
    return 0;
}
int rec(int x)
{
    int s;
    if((x/10)==0)
        return (x);
    else
    {
        s=(x%10)+rec(x/10);
        return (s);
    }
}
int nrec(int x)
{
    int o,t,h,th,tth,s;
    tth = x/ 10000 ;
    th = (x % 10000)/1000 ;
    h = (x % 1000) / 100 ;
    t = (x % 100) / 10 ;
    o = (x % 10) ;
    s = tth + th + h + t + o ;
    return (s) ;
}
