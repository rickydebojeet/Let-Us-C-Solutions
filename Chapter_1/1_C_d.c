#include<stdio.h>
float main()
{
    float f;
    printf("Enter temp. in Farenheit\n");
    scanf("%f",&f);
    printf("Temp.in Celcius=\n%f",((f-32)*(5.0/9)));
    return 0;
}
