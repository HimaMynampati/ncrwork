#include<stdio.h>

int main()
{
	int a=0, b=0,ch=0,result=0;
	scanf("%d",&a);
	scanf("%d", &b);
	printf("enter 1.add 2.sub 3.div 4.mul");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		result=add(a, b);
		break;
	case 2:
		result=sub(a, b);
		break;
	case 3:
		result=div(a, b);
		break;
	case 4:
		result=mul(a, b);
		break;
	default:
		printf("choose a valid numebr");

	}

	printf("%d", result);


}