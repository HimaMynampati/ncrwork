#include<stdio.h>
struct student
{
	int hr;
	int min;
	int sec;
};
void main()
{
	struct student s1;
	printf("enter hr min and sec of the day");
	scanf("%d %d %d", &s1.hr, &s1.min, &s1.sec);
	printf("\n%d:%d:%d", s1.hr, s1.min, s1.sec);



	
}