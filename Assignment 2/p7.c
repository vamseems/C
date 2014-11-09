#include<stdio.h>
int main()
{
	long long int t,q=0;
	scanf("%lld",&t);
	while (t>0)
	{
		long long int n,i,max=0,c,b;
		scanf("%lld",&n);
		long long int a[n];
		for (i=0;i<n;i++)
			scanf("%lld",&a[i]);
		for (i=0;i<n;i++)
		{
			c=0;
			for(b=i+1;b<n;b++)
			{
				if (a[i]<a[b])
				{
					c++;
					i=b;
				}
			}
			if (c>max)
				max=c;

		}
		printf("%lld\n",max+1);
		t--;
	}
	return 0;
}
