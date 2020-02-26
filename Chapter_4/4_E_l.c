#include<stdio.h>
#include<math.h>
int main()
{
    float t,s=0,y,x;
    printf("Enter the value of x.\n");
    scanf("%f",&x);
    y=((x-1)/x);
    for(float i=1;i<=7;i++)
    {
        t=pow(y,i);
        s=s+(1/i)*t;
    }
    printf("%f",s);
    return 0;
}
