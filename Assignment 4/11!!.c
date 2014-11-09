#include<stdio.h>
long long int memory[1000][1000];
long long int ncr(long long int n, long long int r)
{
	if (memory[n][r]!=0)
		return memory[n][r];
	if (r==1)
		return n;
	if (n==r || r==0)
		return 1;
	memory[n-1][r]=(ncr(n-1,r)%1000000007);
	memory[n-1][r-1]=(ncr(n-1,r-1)%1000000007);

		return (memory[n-1][r]+memory[n-1][r-1])%1000000007;
}
int main()
{
	long long int t,n,r,ans;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld%lld",&n,&r);
		ans=ncr(n,r);
		printf("%lld\n",ans);
		t--;
	}
	return 0;
}
