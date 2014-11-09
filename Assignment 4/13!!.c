#include<stdio.h>
long long int expo(long long int a, long long int b)
{
	long long int ans=1;
	if (b==1)
		return a;
	if (b==0)
		return 1;
	if(b%2==0)
	{
		ans=expo(a,b/2);
		return ((ans%1000000007)*(ans%1000000007))%1000000007;
	}
	else
		return (expo(a,b-1)%1000000007)*(a%1000000007);
}

int main()
{
	long long int t,a,b,ans;
	scanf("%lld",&t);
	while (t>0)
	{
		scanf("%lld%lld",&a,&b);
		ans=(expo(a,b)%1000000007);
		printf("%lld\n",ans);
		t--;
	}
	return 0;
}
