#include<stdio.h>
void main()
{
	int n, a[10], i, j,temp;
	printf("enter number of digits");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		j = i;
		if (a[i] > 0)
		{

		}
		else
		{
			while (j - 1 >= 0 && a[j - 1] > 0)
			{
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
				j--;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}