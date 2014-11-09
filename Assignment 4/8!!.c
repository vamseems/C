#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long long int t,*p,i,elements,temp,j,n;
	scanf("%lld",&t);
	while (t>0)
	{
		long long int max=0;
		scanf("%lld",&n);
		elements=pow(2,n)-1;
		p=(long long int *)malloc(sizeof(long long int)*n);
		for (i=0;i<n;i++)
		{
			scanf("%lld",&p[i]);
		//	if (p[i]>max)
		//		max=p[i];
		}
		for (i=0;i<=elements;i++)
		{
			temp=0;
			for (j=0;j<n;j++)
			{
				if (((i>>j) &(1))==1)
					temp=temp^p[j];
			}
			if (temp>max)
				max=temp;
		}
		printf("%lld\n",max);
		t--;
	}
	return 0;
}
