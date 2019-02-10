#include<stdio.h>
void main()
{
	int n,r,b=0;
	printf("enter a number between 0 and 32 ");
	scanf("%d", &n);
	if (n>32||n<0 )
	{
		printf("enter a valid number");
		return;
	}
	while (n != 0)
	{
		r = n % 2;
		b = b * 10 + r;
		n = n / 2;
	}
	printf("%d", b);

}
