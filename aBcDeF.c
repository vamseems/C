#include<stdio.h>
int main()
{
	int i=97;
	while(i<=122 && i>=67)
	{
		printf("%c",i);
		i=i-31;
		printf("%c",i);
		i=i+33;
	}
	return 0;
}

