#include<stdio.h>
int main()
{
    float fi;
    int n;
    printf("Enter the number of days you are late for submission\n");
    scanf("%d",&n);
    if(n<=5)
        fi = n*0.5;
    else if(n<=10)
        fi = n*1;
    else if(n>10&&n<=30)
        fi = n*5;
    else
        printf("Your membership is canceled");
    if (n<=30)
        printf("%.2f",fi);
    return 0;
}
