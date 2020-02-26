#include<stdio.h>
int main()
{
    int n1,n2,min,max,i;
    printf("Enter number\n");
    scanf("%d",&n1);
    printf("Enter number\n");
    scanf("%d",&n2);
    if(n1>n2)
    {
        max=n1;
        min=n2;
    }
    else
    {
        max=n2;
        min=n1;
    }
    printf("Do you want to continue? 1 or 0?\t");
    scanf("%d",&i);
    do{
        printf("Enter number\n");
        scanf("%d",&n2);
        if(n2>max)
            max=n2;
        else if(n2<min)
            min=n2;
        printf("Do you want to continue? 1 or 0?\t");
        scanf("%d",&i);
    }while (i==1);
    printf("The range is %d",(max-min));
    return 0;
}
