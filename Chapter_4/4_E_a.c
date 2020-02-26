#include<stdio.h>
int main()
{
    int num,i,c;
    num=300;
    for(c=1;c<=num;c++)
    {
        if(c==1)
            continue;
        i=2;
        while (i<=c-1)
        {
            if (c%i==0)
                break;
            i++;
        }
        if(i==c)
        printf("%d\n",c);
    }
    return 0;
}
