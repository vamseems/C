#include<stdio.h>
int main()
{
	long int n,a,r,c;
	scanf("%ld",&n);
	while (n>0)
	{
		scanf("%ld",&a);
		c=0;
		while (a!=0)
		{
			r=a%10;
			if (r==3)
				c=c+1;
			a=a/10;
		}
		printf("%ld\n",c);
		n--;
	}
	return 0;
}
