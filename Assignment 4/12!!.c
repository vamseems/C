#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int *p,*sum;
	long long int n,i,j,start,end,profit;
	while(scanf("%lld",&n)!=EOF)
	{

		p=(long long int *)malloc(sizeof(long long int)*n);
		sum=(long long int *)malloc(sizeof(long long int)*n);
		for (i=0;i<n;i++)
		{
			scanf("%lld",&p[i]);
			sum[i]=0;
			if(i!=0)
				sum[i]=sum[i-1]+p[i];
			else
				sum[0]=p[0];
		}
		while (1)
		{
			scanf("%lld%lld",&start,&end);
			if (start==-1 && end==-1)
				break;
			profit=sum[end-1]-sum[start-1]+p[start-1];
			printf("%lld\n",profit);
		}
	}
	return 0;
}
