#include<stdio.h>
int main()
{
	long long int n,f,s,sum,a;
	scanf("%lld",&n);
	while (n>0)
	{
		sum=1;
		s=1;
		f=0;
		scanf("%lld",&a);
		while (a>0)
		{
			sum=f+s;
			f=s;
			s=sum;
			a--;
		}
		n--;

		printf("%lld\n",sum);
	}
	return 0;
}
