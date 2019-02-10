#include<stdio.h>
#include<math.h>
void main()
{
	int b=0, d=0,i=0,r ;
	printf("Please enter a binary number");
	scanf("%d", &b);
	while (b != 0)
	{
		r = b % 10;
		d = d+(r*pow(2, i));
		i++;
		b = b / 10;
	}
	printf("the number in decimal format is %d", d);
}