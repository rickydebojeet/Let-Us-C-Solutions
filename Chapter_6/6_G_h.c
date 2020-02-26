#include<stdio.h>
#include<math.h>
float rec(float,float);
int fact(float);
int main()
{
	float x,sine,i=1;
	printf("Enter the value of x:");
	scanf("%f",&x);
	sine=rec(x,i);
	printf("The result is %f\n",sine);
	return 0;
}
float rec(float x,float i)
{
	float sine;
	if (i<10)
	{
		sine=(((pow(x,i))/fact(i))-((pow(x,i+2))/fact(i+2)))+rec(x,i+4);
		return (sine);
	}
	else
		return 0;
}
int fact(float x)
{
	int f;
	if(x==0)
		return 1;
	else
	{
		f=x*fact(x-1);
		return f;
	}
}