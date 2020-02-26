#include<stdio.h>
int main()
{
    int c,s,o;
    printf("What's the stock?\n");
    scanf("%d",&s);
    printf("Is customer credit ok? 0 or 1\n");
    scanf("%d",&c);
    if(c==0)
        printf("Please clear your credit to buy further things.");
    else
    {
        printf("What's the order quantity?\n");
        scanf("%d",&o);
        if(s>=o)
            printf("%d quantity wil be supplied to you.",o);
        else
            printf("Item in stock is less than than your order.\nHence %d will be supplied now and balance will be delivered later",s);
    }
    return 0;
}
