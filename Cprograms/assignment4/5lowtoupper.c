#include<stdio.h>
void main()
{
	char s[20];
	gets(s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a'&&s[i] <= 'z')
		{
			s[i] = (s[i] - 32);
		}
		else if (s[i] == ' ')
		{

		}
		else
		{
			s[i] = (s[i] + 32);
		}
	}
	printf("\n %s", s);
}