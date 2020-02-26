#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    (a>b)&&(b>c)?printf("%d is the greatest",a):(a=0);
    (b>c)?printf("%d is the greatest",b):printf("%d is the greatest",c);
    return 0;
}
