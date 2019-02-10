#include<stdio.h>
void main()
{
	int n, r, sum=0,m;
	printf("Enter the number");
	scanf("%d", &n);
	m = n;
	while (n != 0)
	{
		r = n % 10;
		sum += (r*r*r);
		n = n / 10;
	}
	
	if (m == sum)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}