#include<stdio.h>
int fact(int);
void main()
{
	int n = 0;
	printf("enter a number");
	scanf("%d", &n);
	printf("%d",fact(n));
	
}
int fact(int n)
{
	if (n > 1)
		return n*fact(n - 1);
	else
		return 1;
}