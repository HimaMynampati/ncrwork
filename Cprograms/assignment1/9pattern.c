#include<stdio.h>
void main()
{
	int n = 0,j,l;
	printf("enter number of lines in pattern ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (j = n - i; j >= 0; j--)
		{
			printf(" ");

		}
		l = i;
		while (l!= 1)
		{
			printf("%d", l);
			l--;
		}
		while (l<=i)
		{
			printf("%d", l);
			l++;
			
		}
		printf("\n");



	}
}