#include<stdio.h>
int main()
{
    int w;
    printf("Enter the weight in pounds.\n");
    scanf("%d",&w);
    if(w<115)
        printf("Boxer class is Flyweight.");
    else if(w>=115&&w<=121)
        printf("Boxer class is Bantamweight");
    else if(w>=122&&w<=153)
        printf("Boxer class is Featherweight.");
    else if(w>=154&&w<=189)
        printf("Boxer class is Middleweight.");
    else
        printf("Boxer class is Heavyweight.");
    return 0;
}
