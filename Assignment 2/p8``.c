#include<stdio.h>
long long int n;
int main()
{
	long long int t;
	long long int x,i,count;
	scanf("%lld",&t);
	while (t>0)
	{
		count=0;
		long long int c=0;
		scanf("%lld%lld",&n,&x);
		long long int a[n];
		for (i=0;i<n;i++)
			scanf("%lld",&a[i]);
		printf("%lld",a[0]);
		a[0]=10000001;
		for (i=0;;i++)
		{
			if (i>(n-1))
				i=i-n;
			if (a[i]!=10000001)
				c++;
			if (c==x)
			{
				printf(" %lld",a[i]);
				a[i]=10000001;
				c=0;
				count++;
			}
			if(count==(n-1))
			{
				break;
			}
		}
		printf("\n");
		t--;
	}
	return 0;
}
