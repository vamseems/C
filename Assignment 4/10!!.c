#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int i,num1,num2,j,c,count;
int check(int n,int k,int *pi)
{
	int *pf;
	int flag=1;
	count=0;
	num2=pow(2,c+1);
	pf=(int *)malloc(sizeof(int)*num2);
	for (i=0,j=0;i<num1;i++,j+=2)
	{
		if(pi[i]>k)
		{
			if (pi[i]%2==0)
			{
				pf[j]=pi[i]/2;
				pf[j+1]=pi[i]/2;
			}
			else
			{
				pf[j]=pi[i]/2;
				pf[j+1]=((pi[i]/2)+1);
			}
		}
		else
		{
			pf[j]=pi[i];
			j--;
			num2--;
		}
	}
	for(i=0;i<num2;i++)
	{
		if (pf[i]<=k)
			flag=1;
		else
			flag=0;
		if (pf[i]<=k && pf[i]!=0)
			count++;
	}
	if (flag==1)
	{
		free(pf);
		return count;
	}
	c++;
	num1=pow(2,c);
	pi=(int *)malloc(num1*sizeof(int));
	for (i=0;i<num1;i++)
		pi[i]=pf[i];
	free(pf);
	check(n,k,pi);
}

int main()
{
	long long int t;
	int n,k,fridges;
	scanf("%lld",&t);
	while(t>0)
	{
		int *pi;
		scanf("%d%d",&n,&k);
		pi=(int *)malloc(sizeof(int)*1);
		*pi=n;
		num1=1;
		c=0;
		if (k==1)
			fridges=n;
		else if (n>k)
			fridges=check(n,k,pi);
		else
			fridges=1;
		printf("%d\n",fridges);
		free(pi);
		t--;
	}
	return 0;
}
