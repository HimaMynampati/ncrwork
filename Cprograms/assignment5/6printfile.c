#include<stdio.h>
void main()
{
	FILE *fp = fopen("input.txt","r");
	if (fp == NULL)
	{
		printf("cannot open input.txt file");
		return;
	}
	while (!feof(fp))
	{
		char ch;
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);
}