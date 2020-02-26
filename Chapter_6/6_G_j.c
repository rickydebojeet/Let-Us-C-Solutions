#include<stdio.h>
#include<math.h>
float area(float,float,float);
int main()
{
	float a,b,c,are;
	printf("Enter the values of a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	are=area(a,b,c);
	printf("The area of the triangle is : %.2f",are);
	return 0;
}
float area(float x,float y, float z)
{
	float s,are;
	s=(x+y+z)/2;
	are=sqrt(s*(s-x)*(s-y)*(s-z));
	return (are);
}