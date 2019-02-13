#include<stdio.h>
struct member
{
	int a;
	char s;
};
union member1
{
	int a;
	char s;
};
void main()
{
	struct member m;
	union member1 m1;
	printf("size of structure is %d\n", sizeof(m));

	printf("size of union is %d", sizeof(m1));

}