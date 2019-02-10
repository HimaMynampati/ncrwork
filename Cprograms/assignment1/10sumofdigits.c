#include<stdio.h>
void main()
{
	int n = 0, sum = 0,r=0;
	printf("Enter the number ");
	scanf("%d", &n);
	printf("\n");
	while (n != 0)
	{
		r = n % 10;
		sum += r;
		n = n / 10;
	}
	printf("Sum of digits is %d", sum);
}