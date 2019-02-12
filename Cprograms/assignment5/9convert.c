#include<stdio.h>
int main()
{
	int len;
	FILE *fp;
	fp = fopen("input.txt", "w+");
	char a[10], ch, ch1;
	gets(a);
	len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		ch = a[i];
		if (ch >= 'a'&&ch <= 'z')
		{
			ch = ch - 32;
		}
		else
		{
			ch = ch + 32;
		}
		fputc(ch, fp);
	}

	fclose(fp);
}