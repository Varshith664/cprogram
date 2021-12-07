#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	if(a+b+c==180)
	{
		printf("it is a triangle");
	}
	else
	{
		printf("it is not a triangle");
	}
}
