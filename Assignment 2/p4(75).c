#include<stdio.h>
int main()
{
	long long int t,x,n;
	int i,j,c,k;
	scanf("%lld",&t);
	while (t>0)
	{
		scanf("%lld%lld",&n,&x);
		i=0;
		x=x%26;
		int a[1000000];
		while(1)
		{
			scanf("%d",&c);
			if (c==-1)
				break;
			else
			{
				a[i]=c;
				i++;
			}
		}
		j=0;
		if (n==0)
		{
			for(j=0;j<i;j++)
				printf("%c",a[j]);
			printf("\n");
		}
		else
		{
			for(k=0;i>=k*n;k++)
			{
				while(1)
				{
					if (j>=k*n && j<(k+1)*n)
					{
						if (a[j]>=97 && a[j]<=122)
						{
							if (k%2!=0)
							{
								a[j]=a[j]+x;
								if (a[j]>122)
									a[j]=a[j]-26;
							}
							else
							{
								a[j]=a[j]-x;
								if (a[j]<97)
									a[j]=a[j]+26;
							}
						}
						if (a[j]>=65 && a[j]<=90)
						{
							if (k%2!=0)
							{
								a[j]=a[j]+x;
								if (a[j]>90)
									a[j]=a[j]-26;
							}
							else
							{
								a[j]=a[j]-x;
								if (a[j]<65)
									a[j]=a[j]+26;
							}
						}

					}
					else
						break;

					j++;
				}
			}
			for(j=0;j<i;j++)
				printf("%c",a[j]);
			printf("\n");
		}
		t--;
	}
	return 0;
}
