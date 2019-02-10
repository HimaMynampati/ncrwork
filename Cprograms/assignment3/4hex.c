#include<stdio.h>
void main()
{
	int s,h,n,r,b[10],i=0,j,a[10];
	printf("enter a hexadecimal number");
	scanf("%x",&h);
	n = h;
	int k = n;
	printf("\n %d", n);
	printf("\n");
	while (n != 0)
	{
		r = n % 2;
		a[i] = r;
		r = !r;
		b[i] = r;
		i++;
		n = n / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", b[j]);
	}
	printf("\n hex value is %x", h);
	int h1 = (h & 0x0fff);
	printf("\nvalue after masking with offf is %x", h1);
	printf("\n enter number of bits to be shifted");
	scanf("%d",&s);
	int g= k << s;
	printf("\n the hex value after shifting is %d %x",g,g);


}