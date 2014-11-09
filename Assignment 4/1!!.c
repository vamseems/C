#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int t,out,i,j,num,open,arn;
	int flag;
	scanf("%lld",&t);
	while(t>0)
	{
		flag=1;
		long long int prod=1;
		scanf("%lld",&num);
		long long int *p1;
		p1=(long long int *)malloc(sizeof(long long int)*num);
		for (j=0;j<num;j++)
			scanf("%lld",(p1+j));
		for(i=0;i<num;i++)
		{
			if (p1[i]!=0)
				prod=prod*p1[i];
			else
				flag=0;
		}
		scanf("%lld",&open);
		while(open>0)
		{
			scanf("%lld",&arn);
			if (p1[arn]!=0 && flag==1)
				out=prod/p1[arn];
			else if (p1[arn]!=0 && flag==0)
				out=0;
			else if (p1[arn]==0)
				out=prod;
			printf("%lld",out);
			if (open==1)
				printf(" \n");
			else
				printf(" ");
			open--;
		}
		free(p1);
		t--;

	}
	return 0;
}
