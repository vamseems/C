#include<stdio.h>
int main()
{
	long long int n,a,r,d,ans;
	scanf("%lld",&n);
	while (n>0)
	{
		scanf("%lld",&a);
	/*	if (a<10)
			printf("%lld\n",a*a);
		else
		{
			p=a-9;
			printf("%lld\n",(81+(p*p)));
	*/	
		r=a%9;
		d=a/9;
		ans=(81*d)+(r*r);
		printf("%lld\n",ans);
		n--;
	}
	return 0;
}
