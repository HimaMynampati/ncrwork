#include<stdio.h>
#include<string.h>
void main()
{
	char text[80];
	int len = 0, i = 0, alphabets=0, digits=0, blanks=0;
	printf("Enter a String \n");
	gets(text);
	while (text[len] != '\0')
	{
		len++;
	}
	printf("total length =%d", len);
	printf("\n");
	for (i = 0; i < len; i++)
	{
		if ((text[i] >= 'a'&&text[i] <= 'z')||(text[i] >= 'A'&&text[i] <= 'Z'))
		{
			alphabets++;
		}	
		else if(text[i] >= '0'&&text[i] <= '9')
		{
			digits++;
		}
		else if (text[i] == ' ')
		{
			blanks++;
		}
	}
	printf("alphabets=%d \nnumbers=%d\nblanks=%d", alphabets, digits, blanks);

	
}