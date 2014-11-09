#include<stdio.h>
int main()
{
	int c=1,b;
	scanf("%d",&b);
	while (b>=1)
	{
		c=c*b;
		b--;
	}
	printf("%d",c);
	return 0;
}

