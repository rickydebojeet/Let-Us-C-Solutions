#include<stdio.h>
#include<math.h>
void calc(int*,float*,float*);
int main()
{
    int sum;
    float mean,stad;
    printf("Enter the five numbers:");
    calc(&sum,&mean,&stad);
    printf("The sum is = %d\nThe average is = %f\nThe mean is = %f\n",sum,mean,stad);
    return 0;
}
void calc(int *x,float *y,float *z)
{
    int a,b,c,d,e,sum;
    float mean,mad,stad;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    mean=sum/5;
    mad=(a*a)+(b*b)+(c*c)+(d*d)+(e*e);
    stad=sqrt((mad/5)-((sum/5)*(sum/5)));
    *x=sum;
    *y=mean;
    *z=stad;
}
