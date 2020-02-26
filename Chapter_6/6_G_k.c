#include<stdio.h>
#include<math.h>
float dist(float,float,float,float);
float area(float,float,float);
float calc(float,float,float,float,float,float,float);
int main()
{
	float x1,x2,x3,y1,y2,y3,x,y,c;
	float d1,d2,d3,a;
	printf("Please enter the values of A:");
	scanf("%f %f",&x1,&y1);
	printf("Please enter the values of B:");
	scanf("%f %f",&x2,&y2);
	printf("Please enter the values of C:");
	scanf("%f %f",&x3,&y3);
	printf("Please enter the values of P:");
	scanf("%f %f",&x,&y);
	d1=dist(x1,y1,x2,y2);
	d2=dist(x2,y2,x3,y3);
	d3=dist(x3,y3,x1,y1);
	a=area(d1,d2,d3);
	c=calc(x1,y1,x2,y2,x,y,a);
	printf("The distance of AB is: %f\n",d1);
	printf("The distance of BC is: %f\n",d2);
	printf("The distance of CA is: %f\n",d3);
	printf("The area of the triangle is: %f\n",a);
	printf("The value of c is: %f",c);
	return 0;
}
float dist( float x1,float y1,float x2,float y2)
{
	float dis;
	dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	return dis;
}
float calc(float x1,float y1,float x2,float y2,float x,float y,float aea)
{
	float d1,d2,d3,rarea;
	d1=dist(x1,y1,x2,y2);
	d2=dist(x2,y2,x,y);
	d3=dist(x,y,x1,y1);
	rarea=area(d1,d2,d3);
	if(rarea>aea)
		return 0;
	else
		return 1;
}
float area(float x,float y, float z)
{
	float s,are;
	s=(x+y+z)/2;
	are=sqrt(s*(s-x)*(s-y)*(s-z));
	return are;
}