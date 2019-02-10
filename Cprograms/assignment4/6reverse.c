#include<stdio.h>
void reverse(char[], int,int);
void main()
{
	char a[20];
	printf("enter a string ");
	gets(a);
	int len = strlen(a);
	reverse(a,0,len-1);

}
void reverse(char b[],int x,int y)
{
	int i = x;
	int j = y;
	if (i >=j )
	{
		printf("%s", b);
		return ;
	}
	char temp;
	temp = b[i];
	b[i] = b[j];
	b[j] = temp;
	i++;
	j--;
	reverse(b,i,j);



}