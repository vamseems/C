#include<stdio.h>
#include<stdlib.h>
void sort (int i, long long int *p,int n)
{
	int l,k,temp;
	for (k=i;k<n;k++)
	{
		for (l=k+1;l<n;l++)
		{
			if (p[k]>p[l])
			{
				temp=p[k];
				p[k]=p[l];
				p[l]=temp;
			}
		}
	}
}

int main()
{
	int t,n,i,flag,j;
	long long int temp;
	scanf("%d",&t);
	while (t>0)
	{
		flag=0;
		scanf("%d",&n);
		long long int *p;
		p=(long long int *)malloc(sizeof(long long int)*n);
		for (i=0;i<n;i++)
			scanf("%lld",&p[i]);
		for (i=n-1;i>=0;i--)
		{
			if (p[i-1]<p[i])
			{
				sort(i,p,n);
				for (j=i;j<n;j++)
				{
					if (p[j]>p[i-1])
						break;
				}
				temp=p[j];
				p[j]=p[i-1];
				p[i-1]=temp;
				flag=1;
				break;
			}
		}
		for (i=0;i<(n-1);i++)
			printf("%lld ",p[i]);
		printf("%lld\n",p[n-1]);
		t--;
	}
	return 0;
}

