#include<stdio.h>
void main()
{
	int n = 0, r = 0, sum = 0;
	printf("please enter a hexa decimal number");
	scanf("%x", &n);
	printf("\nthe number in decimal format is %d ", n);
	while (n != 0)
	{
		r = n % 2;
		sum = sum * 10 + r;
		n = n / 2;

	}
	printf("\n the binary number is %d", sum);
}