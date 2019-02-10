#include<stdio.h>
#include<stdio.h>
#include<ctype.h>

int main()
{
	char *arr[60];
	int n;
	printf("enter number of strings");
	scanf("%d", &n);
	char name[10];
	for (int i = 0; i < n; i++)
	{
		printf("\n enter %d string ", i);
		scanf("%s", name);
		//printf("%s", name);
		int len = strlen(name);
		arr[i] = (char *)malloc((len + 1) * sizeof(char));

		if (arr[i] == NULL)
		{
			for (int j = i; j >= 0; j--)
			{
				free(arr[j]);
			}
			return -1;
		}
		strcpy(arr[i], name);
	}
	

	for (int k = 0; k < n; k++)
	{
		printf("%s ", arr[k]);
	}
}