#include<stdio.h>
int rec(int,int);
int main()
{
	int a,b,gcd;
	printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);
	gcd=rec(a,b);
	printf("The greatest common divisor is: %d\n",gcd);
	return 0;
}
int rec(int x,int y)
{
	if((x%y)==0)
		return y;
	else
		rec((y),(x%y));
}