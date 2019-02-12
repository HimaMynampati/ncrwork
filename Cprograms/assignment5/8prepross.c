#include<stdio.h>
#define book(name,author) #name" is written by "#author
#define print(s) printf("token "#s"=%d",token##s)
int main()
{
#ifdef book
	printf("%s", book(ansci, swamy));
	printf("\n");
#endif
#ifdef print(s)
	int token9 = 100;
	print(9);
#else 
	printf("wrong");
#endif

}