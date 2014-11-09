#include<stdio.h>
#include<stdlib.h>
long long int n;
int partition(long long int a[],long long int low,long long int high)
{
	long long int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
		merge(a,low,mid,high);
	}
	return 0;
}

int merge(long long int a[],long long int low,long long int mid,long long int high)
{
	long long int i,m,k,l,*temp;
	temp=(long long int *)malloc(sizeof(long long int)*n);
	l=low;
	i=low;
	m=mid+1;
	while((l<=mid)&&(m<=high))
	{
		if(a[l]<=a[m])
		{
			temp[i]=a[l];
			l++;
		}
		else
		{
			temp[i]=a[m];
			m++;
		}
		i++;
	}
	if(l>mid)
	{
		for(k=m;k<=high;k++)
		{
			temp[i]=a[k];
			i++;
		}
	}
	else
	{
		for(k=l;k<=mid;k++)
		{
			temp[i]=a[k];
			i++;
		}
	}
	for(k=low;k<=high;k++)
		a[k]=temp[k];
	free(temp);
	return 0;
}

int main()
{

	long long int *a,i,t;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld",&n);
		a=(long long int *)malloc(sizeof(long long int)*n);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		partition(a,0,n-1);
		for(i=0;i<n;i++)
			printf("%lld ",a[i]);
		printf("\n");
		t--;
	}
	return 0;
}
