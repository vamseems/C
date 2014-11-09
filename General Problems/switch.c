#include<stdio.h>
int main()
{
	char i='a';
	switch (i)
	{
		case 'a':
			printf("case : %c\n", i);
			break;
		case 'b':
			printf("case : %c\n", i);
			break;
		case 'c':
			printf("case : %c\n", i);
			break;
		default:
			printf("I dont belong to any of the cases\n");
	}
	return 0;
}
