#include <stdio.h>
int main()
{
    int hard,tens = 0;
    float carb = 0;
    printf("Please enter hardness,carbon content and tensile\n");
    scanf("%d %f %d",&hard,&carb,&tens);
    if (hard>50&&carb<0.7&&tens>5600)
        printf ("Grade is 10\n");
    else if (hard>50&&carb<0.7&&tens<5600)
        printf ("Grade is 9\n");
    else if (carb<0.7&&tens>5600&&hard<50)
        printf ("Grade is 8\n");
    else if (hard>50&&tens>5600&&carb>0.7)
        printf ("Grade is 7\n");
    else if ((hard>50)||(carb<0.7)||(tens>5600))
        printf ("Grade is 6\n");
    else
        printf ("Grade is 5\n");
    return 0;
}
