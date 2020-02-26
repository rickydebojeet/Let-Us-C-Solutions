#include<stdio.h>
int main()
{
    float t;
    printf ("Enter the time taken by the worker in hours.\n");
    scanf ("%f",&t);
    if(t<=3)
        printf("Highly efficient!");
    else if(t<=4)
        printf("Improve your speed!");
    else if(t<=5)
        printf("You need training for speed improvement.");
    else
        printf("You are terminated.");
    return 0;
}
