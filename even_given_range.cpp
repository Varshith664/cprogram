#include<stdio.h>
int even(int h,int n);
int main(void)
{
	int h,n;
	scanf("%d",&h);
	scanf("%d",&n);
	even(h,n);
}
int even(int h,int n)
{
	int i;
	for(i=h;i<=n;i++)
	{
	if(i%2==0)
	{
		printf("%d\n",i);
	}
   }   
}
