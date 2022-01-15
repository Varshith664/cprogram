#include<stdio.h>
int leapyear(int n);
int main(void)
{
	int n;
	printf("enter the year");
	scanf("%d",&n);
    leapyear(n);
}
int leapyear(int n)
{
	int a;
	if(n%4==0&&n%400==0)
	{
		printf("it is leap year");
	}
	else
	{
		printf("it is not leap year");
	}
}
