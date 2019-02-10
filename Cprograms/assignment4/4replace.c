#include<stdio.h>
int replace(char *);
void main()
{
	int n;
	char *cat="The cat sat";
	n=replace(cat);
	printf("\n n %d", n);


}
int replace(char *a)
{
	int i = 0,n=0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ')
		{
			a[i] = '-';
			n++;
		}
	}
	printf("%s",a);
	return n;
}