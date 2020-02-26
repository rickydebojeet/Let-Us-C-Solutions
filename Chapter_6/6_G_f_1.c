#include<stdio.h>
int main()
{
	int num,r,o1,o2;
	o1=o2=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%2;
		num=num/2;
		o1=o1*10+r;
	}
	while(o1>0)
	{
		r=o1%10;
		o1=o1/10;
		o2=o2*10+r;
	}
	printf("The binary equivalent of the number is : %d",o2);
	return 0;
}