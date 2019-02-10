#include<stdio.h>
void squeeze(char s1[], char s2[]);

int main(void)
{
	char s1[10], s2[10];
	printf("enter s1 ");

	gets(s1);
	printf("enters2 ");
	gets(s2);

	squeeze(s1, s2);

	printf("%s", s1);

	return 0;
}

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	k = 0;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		for (j = 0; (s1[i] != s2[j]) && s2[j] != '\0'; ++j)
			;
		if (s2[j] == '\0')
			s1[k++] = s1[i];
	}

	s1[k] = '\0';
}
