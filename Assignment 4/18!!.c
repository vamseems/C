#include<stdio.h>
long long int bank (long long int n)
{
	long long int n2,n3,n4;
	n2=n/2;
	n3=n/3;
	n4=n/4;
	if (n2+n3+n4<=n)
		return n;
	if (n2/2+n2/3+n2/4<n2)
		return (n2+n3+n4);
	else
	{
		return bank(n4/2)+bank(n3)+bank(n3/2)+2*bank(n4);
	}
	
	
}

int main()
{
	long long int n,out;
	while (scanf("%lld",&n)!=EOF)
	{
		out=bank(n);
		printf("%lld\n",out);
	}
	return 0;
}
