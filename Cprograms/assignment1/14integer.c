#include<stdio.h>
int itob(int, int);
int itoh(int, int);
void main()
{
	int n, base,res;
	printf("enter a number ");
	scanf("%d", &n);
	printf("\nenter base to which it is coverted to");
	scanf("%d", &base);
	if (base == 2)
	{
		res = itob(n, base);
		printf("\n the value in base %d is %d", base, res);
	}

	else if (base == 16)
	{
		res = itoh(n, base);
		printf("\n the value in base %d is %x", base, res);
	}
	else
		printf("\nenter a valid base");
		return;

		
		
}
int itob(int n, int base)
{
	int r,sum=0;
	while (n != 0)
	{
		r = n % base;
		sum = sum * 10 + r;
		n = n / base;

	}
	return sum;
}
int itoh(int n, int base)
{
	
	printf("%x", n);
	return n;

}