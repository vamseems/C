#include<stdio.h>
#include<ctype.h>
int main()
{
	int n;
	char c;
	scanf("%d",&n);
	getchar();
	while (n>0)
	{
		scanf("%c",&c);
		getchar();
		if (isupper(c))
			printf("UPPER CASE CHARACTER\n");
		else if (islower(c))
			printf("LOWER CASE CHARACTER\n");
		else if (isdigit(c))
			printf("NUMERAL\n");
		else
			printf("NON-ALPHANUMERAL\n");
		n--;
	}
	return 0;
}
	        	

