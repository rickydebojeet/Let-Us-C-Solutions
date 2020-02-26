#include<stdio.h>
int rec(int);
int main()
{
	int n=25,s;
	s=rec(n);
	printf("The sum of the first 25 natural numbers is %d\n",s);
	return 0;
}
int rec(int x)
{
	int s;
	if (x!=0)
	{
		s=x+rec(x-1);
		return (s);
	}
	else if (x==0)
	{
		return 0;
	}
}