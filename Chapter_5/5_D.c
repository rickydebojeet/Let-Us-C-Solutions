#include<stdio.h>
int main()
{
    int c,f;
    printf("Enter the class and number of subjects failed.\n");
    scanf("%d %d",&c,&f);
    switch(c)
    {
    case 1:
        if(f>3)
            printf("No grace marks.\n");
        else
            printf("5 grace marks per subjects.\n");
        break;
    case 2:
        if(f>2)
            printf("No grace marks.\n");
        else
            printf("4 grace marks per subjects.\n");
        break;
    case 3:
        if (f>1)
            printf("No grace marks.\n");
        else
            printf("5 grace marks.\n");
        break;
    default:
        printf("Wrong value.");
    }
    return 0;
}
