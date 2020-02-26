#include<stdio.h>
void swapr(int*,int*,int*);
int main()
{
	int x,y,z,choice;
	printf("Enter the values of x,y,z:");
	scanf("%d %d %d",&x,&y,&z);
	printf("The pre values are: %d %d %d\n",x,y,z);
	do
	{
		swapr(&x,&y,&z);
		printf("After shift values are: %d %d %d\nDo you want to continiue? 0 or 1\n",x,y,z);
		scanf("%d",&choice);
	} while (choice==1);
	return 0;
}
void swapr(int*a,int*b,int*c)
{
	int t;
	t=*a;
	*a=*c;
	*c=*b;
	*b=t;
}