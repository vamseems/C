#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	unsigned long long int *a;
	a=(unsigned long long int *)malloc(sizeof(unsigned long long int)*((n/64)+1));
	getchar();
	int i=0,j=0;
	char c;
	unsigned long long int tmp;
	while (j<n)
	{
		c=getchar();
		tmp=c-'0';
		a[j/64]=a[j/64] | tmp<<(j%64);
		j++;
	}
	int q;
	int count=0;
	int index;
	char opt;
	unsigned long long int out=0;
	unsigned long long int x=1;
	scanf("%d",&q);
	while (q>0)
	{
		getchar();
		opt=getchar();
		scanf("%d",&index);
		if (opt=='s')
		{
			a[index/64]=a[index/64]|(1ULL<<(index%64));
		}
		else if (opt=='t')
		{
			a[index/64]=a[index/64]^(1ULL<<(index%64));
		}
		else if (opt=='r')
		{
			a[index/64]=a[index/64]&(~(1ULL<<(index%64)));

		}
		else if (opt=='p')
		{
			unsigned long long int y=1;
			out=0;
			x=1;
			y=1ULL;
			i=0;
			y=y<<index%64;
			while (i<64 && index<n)
			{
				if (a[index/64]&y)
				{
					out=out+x;
				}
				index++;
				y=y<<1;
				if (index%64==0)
					y=1;
				i++;
				x=x*2;
			}
			printf("%llu\n",out);
		}
		else if (opt=='0')
		{
			count=0;
			index+=1;
			while (!(a[index/64]&(1ULL<<index)) && index<n)
			{
				count++;
				index++;
			}
			printf("%d\n",count);

		}
		else if (opt=='1')
		{
			count=0;
			int r;
			index+=1;
			while ((a[index/64]&(1ULL<<index)) && index<n)
			{
				count++;
				index++;
			}
			printf("%d\n",count);

		}
		q--;
	}
	return 0;
}
