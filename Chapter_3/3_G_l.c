#include<stdio.h>
int main()
{
    float w,h,b;
    printf("Enter the weight.\n");
    scanf("%f",&w);
    printf("Enter the height.\n");
    scanf("%f",&h);
    b=w/(h*h);
    if(b<=15)
        printf("Your category is Starvation");
    else if(b<=17.5)
        printf("Your category is Anorexic");
    else if(b<=18.5)
        printf("Your category is Underweight");
    else if(b<=24.9)
        printf("Your category is Ideal");
    else if(b<=25.9)
        printf("Your category is Overweight");
    else if(b<=30.9)
        printf("Your category is Obese");
    else
        printf("Morbidly Obese");
    return 0;
}
