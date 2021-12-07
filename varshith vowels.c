#include<stdio.h>
main()
{
	char k;
	printf("enter the value of k:-");
	scanf("%c",&k);
	if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u')
	{
		printf("it is an vowel");
	}
	else
	{
		printf("it is not an vowel");
	}
}
