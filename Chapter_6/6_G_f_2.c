#include<stdio.h>
void rec(int);
int main()
{
	int num;
	printf("Enter the number you want to convert to binary:");
	scanf("%d",&num);
	rec(num);
	return 0;
}
void rec(int x)
{
	if ((x/2)!=0)
	{
		rec(x/2);
	}
	printf("%d",x%2);
}