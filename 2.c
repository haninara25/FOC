#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is greater");
	}
	else if(b>a&&b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
}
