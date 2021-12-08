#include<stdio.h>
main()
{
	int a,b,c,d,e,f;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	printf("enter the value of d");
	scanf("%d",&d);
	printf("enter the value of e");
	scanf("%d",&e);
	f=(a+b+c+d+e)*100/500;
	if(f>90)
	{
		printf("grade a");
	}
	else if(f>80)
	{
		printf("grade b");
	}
	else if (f>70)
	{
		printf("grade c");
	}
	else if (f>40)
	{
		printf("grade d");
	}
	else
	{
		printf("grade e");
	}
}
