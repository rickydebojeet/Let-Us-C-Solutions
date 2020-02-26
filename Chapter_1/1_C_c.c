#include<stdio.h>
float main()
{
    float per,agg;
    int a,b,c,d,e;
    printf("Enter the marks of five subjects in separate lines \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    agg=a+b+c+d+e;
    per=(agg*100)/500;
    printf("Agg marks=%f\nPer marks=%.2f\n",agg,per);
    return 0;
}
