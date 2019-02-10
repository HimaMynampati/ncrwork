#include<stdio.h>
#include<math.h>
void main()
{
	int b = 0, d = 0, i = 0, r, count = 0;
	printf("Please enter a binary number");
	scanf("%d", &d);
	
	while (d != 0)
	{
		r = d % 10;
		if (r == 1)
			count++;
		d = d / 10;
	}
	printf("number of ones are %d", count);
}