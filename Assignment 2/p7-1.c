#include<stdio.h>
int main()
{
	long long int t,q=0;
	scanf("%lld",&t);
	while (t>0)
	{
		long long int n,i,j,max,y;
		scanf("%lld",&n);
		long long int k;
		long long int a[n],b[n];
		for (i=0;i<n;i++)
			 scanf("%lld",&a[i]);
		b[0]=a[0];
		max=a[0];
		i=1;
		j=1;
		while (i<n)
		{
			if(a[i]>max)
			{
				b[j]=a[i];
				max=a[i];
				j++;
			}
			else if (a[i]<max)
			{
				y=0;
				while (y<=j)
				{
					if (y==j)
					{
						max=a[i];
						b[j]=a[i];
						break;
					}
					if (a[i]<b[y])
					{
						b[y]=a[i];
						break;
					}
					y++;
				}
			}
			i++;
		
//		printf("\t%lld\n", max);
		for (k=0;k<j;k++)
			printf("%lld ",b[k]);
		printf("\n");
		}
		printf("%lld\n",j);
		t--;
	}
	return 0;
}
