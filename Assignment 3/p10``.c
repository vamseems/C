#include<stdio.h>
unsigned long long int reverse(unsigned long long int n)
{
	unsigned long long int x=0;
	int i;
	for (i=0;i<32;i++)
	{
		x=x<<1;
		x=x|(n&1);
		//	printf ("%llu",x);
		n=n>>1;
		//	printf("%d. %llu\n",i,x);
	}
//	printf("%d. %llu\n",i,x);
	return x;
}

int main()
{
	unsigned long long int a,b;
	while ((scanf("%llu%llu",&a,&b))!=EOF)
	{
		a=reverse(a);
		//	a=reverse(a);
		//	printf("\n");
		//	b=reverse(b);
		b=reverse(b);
		printf("%llu\n",a+b);
	}
	return 0;
}
