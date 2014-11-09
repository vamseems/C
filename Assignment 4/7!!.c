#include<stdio.h>
#include<stdlib.h>
long long int check(long long int t,long long int *p,long long int end)
{
	int first=0;
	int mid;
	int last;
	last=end;
	while (first <= last)
	{
		mid=(first+last)/2;
		if (t>p[mid])
			first=mid+1;
		else if (t<p[mid])
			last=mid-1;
		else
			first=last+1;
	}
	long long int ans=mid;
	if (t==p[mid])
		return ans;
	else
		return -1;
}

int main()
{
	long long int n,i,open,t;
	long long int *p;
	while(scanf("%lld",&n)!=EOF)
	{
		p=(long long int *)malloc(sizeof(long long int)*n);
		for (i=0;i<n;i++)
			scanf("%lld",&p[i]);
		scanf("%lld",&open);
		for(i=0;i<open;i++)
		{
			scanf("%lld",&t);
			long long int ans=check(t,p,n-1);
			printf("%lld\n",ans);
		}
		free(p);
	}
	return 0;
}

