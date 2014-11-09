#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		int flag=1;
		long long int n;
		scanf("%lld",&n);
		if (n==0)
			printf("NO");
		else
		{
			while(n!=1)
			{
				if (n%2!=0)
				{
					flag=0;
					break;
				}
				n=n/2;
			}
			if (flag==1)
				printf("YES\n");
			else
				printf("NO\n");
		}
		t--;
	}
	return 0;
}
