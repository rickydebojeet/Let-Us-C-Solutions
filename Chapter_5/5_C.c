#include<stdio.h>
int main()
{
    int d,n,t=1,i,c;
    do{
        printf("1.Factorial of a number.\n2.Prime or not.\n3.Odd or even.\n4.Exit\nYour choice:");
        scanf("%d",&d);
        fflush(stdin);
        if(d<=3&&d>=1)
        {
            printf("Enter the number:");
            fflush(stdin);
            scanf("%d",&n);
        }
        switch(d)
        {
            case 1:
                t=1;
                for(i=1;i<=n;i++)
                    t=t*i;
                printf("The factorial of %d is %d.\n\n",n,t);
                break;
            case 2:
                for(i=2;i<=n-1;i++)
                {
                    if(n%i==0)
                    {
                        printf("The no. %d is not prime.\n\n",n);
                        break;
                    }
                }
                if(i==n)
                    printf("The no. %d is prime.\n\n",n);
                break;
            case 3:
                if(n%2==0)
                    printf("The number is even.\n\n");
                else
                    printf("The number is odd.\n\n");
                break;
            case 4:
                printf("Are you sure?\t1 or 0\n");
                scanf("%d",&c);
                break;
            default:
                printf("Please try again with 1, 2, 3 & 4\n");
        }
        }while(c!=1);
        return 0;
}
