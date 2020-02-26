#include<stdio.h>
int main()
{
    int count1=0,count2;
    char c,i,j;
    for(c=71;c>=65;c--)
    {
        for(i=65;i<=71;i++)
        {
            if(i<=c)
                printf("%c ",i);
        }
        if(c<=70)
            for(count2=1;count2<=count1;count2++)
            {
                printf("  ");
            }
        for(j=71;j>=65;j--)
        {
            if(j<=c&&j!=71)
                printf("%c ",j);
        }
        if(c==71)
            count1=count1+1;
        else
            count1=count1+2;
        printf("\n");
    }
    return 0;
}
