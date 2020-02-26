#include<stdio.h>
int main()
{
    int l,a=8,i=1,s,x,y=1;
    for(l=1;l<=5;l++)
    {
        for(s=1;s<=a;s++)
        {
            printf(" ");
        }
        printf("%4d",i);
        if(l>=3)
        {
            for(x=1;x<=y;x++)
            {
                if(x==2&&y==3)
                    printf("%4d",l+1);
                else
                    printf("%4d",l-1);
            }
            y++;
        }
        if(l>=2)
            printf("%4d",i);
        a=a-2;
        printf("\n");
    }
    return 0;
}
