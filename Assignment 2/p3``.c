#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,r,t,n,i,s,j;
	scanf("%lld",&t);
	while (t>0)
	{
		scanf("%lld",&n);
		s=0;
		if (n==1)
			printf("0\nNo\n");
		else
		{
			a=sqrt(n);
			j=2;
			for (i=j;i<=a;i++)
			{
				r=n%i;
				if (r==0)
				{
					//	s=s+i+(n/i);
					s=s+i;
					if ((n/i)!=i)
						s=s+(n/i);
					j=i+1;
				}
			}
			if (n==1)
			{
				printf("%lld\n",s);
				printf("No\n");
			}
			else if ((s+1)==n)
			{
				printf("%lld\n",s+1);
				printf("Yes\n");
			}
			else
			{
				printf("%lld\n",s+1);
				printf("No\n");
			}
		}
		t--;
	}
	return 0;
}
