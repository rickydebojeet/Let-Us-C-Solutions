#include<stdio.h>
void rec(int,int,int,int);
int main()
{
	int a,b,c,i=3;
	a=1;b=1;
	c=a+b;
	printf("%d %d ",a,b);
	rec(a,b,c,i);
	return 0;
}
void rec(int x,int y,int z,int i)
{
	printf("%d ",z);
	x=y;
	y=z;
	z=x+y;
	i++;
	if(i<=25)
		rec(x,y,z,i);
}
