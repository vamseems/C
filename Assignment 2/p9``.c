#include<stdio.h>
int main()
{
	long long int t,temp;
	int n,b,e,i;
	scanf("%lld",&t);
	while (t>0)
	{
		scanf("%d",&n);
		long long int num[n];
		for(i=0;i<n;i++)
			scanf("%lld",&num[i]);
		for (b=0;b<n-1;b++)
		{
			for (e=b+1;e<n;e++)
			{
				if (num[b]>num[e])
				{
					temp=num[b];
					num[b]=num[e];
					num[e]=temp;
				}
			}
		}
		for(i=0;i<n-1;i++)
			printf("%lld ",num[i]);
		printf("%lld\n",num[n-1]);
		t--;
	}
	return 0;
}
