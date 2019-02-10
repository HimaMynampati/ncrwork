#include<stdio.h>
void main()
{
	int a, b=0, n, r;
	printf("enter a number ");
	scanf("%d", &n);
	printf("\n");
	a = n;
	while (n != 0)
	{
		r = n % 10;
		b = b * 10 + r;
		n = n / 10;
	}
	if (a == b)
	{
		printf("palindrome");

	}
	else
		printf("not palindrome");

}