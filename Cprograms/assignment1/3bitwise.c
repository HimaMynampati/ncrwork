#include<stdio.h>
void main()
{
	int n = 0xCAFE,res,res1,res2;
	res = (0xCAFE & 0x000F);
	if (res == 14||11||7||13||15)
		printf(" atleast three of the bits are on\n");
	else
		printf("atleast three of the bits are not on\n");
	res1 = 0xCAFE & 0xFF00;
	res2 = 0xCAFE & 0x00FF;
	res1 = res1 >> 8;
	res2 = res2 << 8;
	res = res1 | res2;
	printf("%x\n", res);
	res1 = 0xCAFE & 0x000F;
	res1 = res1 <<12;
	res2 = 0xCAFE & 0xFFF0;
	res2 = res2 >> 4;
	res = res1 | res2;
	printf("%x", res);

}