#include <stdio.h>
#include <math.h>
int main()
{
    float ang;
    int sum;
    printf("Enter the value of angle in degrees.\n");
    scanf("%d",&ang);
    sum = ((sin(ang)*sin(ang))+(cos(ang)*cos(ang)));
    if (sum==1)
        printf("The sum is 1");
    else
        printf("The sum is not 1");
    return 0;
}
