#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    float r=0,a=0;
    printf("Enter the values of x and y.\n");
    scanf("%d %d",&x,&y);
    r = sqrt((x*x)+(y*y));
    a = atan (y/x);
    printf("The polar co-ordinates are = (%f,%f)",r,a);
    return 0;
}
