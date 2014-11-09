#include<stdio.h>
int main()
{
	long long int t,a[4],n,i;
	scanf("%lld",&t);
	while (t>0)
	{
		scanf("%lld%lld%lld%lld",&a[1],&a[2],&a[3],&n);
		long long int b[n];
		b[1]=a[1];
		b[2]=a[2];
		b[3]=a[3];
		for (i=4;i<=n;i++)
		{
			b[i]=b[i-1]+b[i-2]+b[i-3];
		}
		printf("%lld\n",b[n]);
		t--;
	}
	return 0;
}

		
