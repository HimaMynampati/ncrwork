#include<stdio.h>
void main()
{
	int n, r,sum=0;
	printf("Enter any number");
	scanf("%d", &n);
	while (n != 0)
	{
		r = n % 10;
		sum = sum * 10 + r;
		n = n / 10;
	}
	printf("\n reverse of the number is %d ", sum);


}