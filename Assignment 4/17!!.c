#include<stdio.h>
int main()
{
	int flag;
	long long int n,digit,i,j,min;
	long long int a[9];
	int arr[1000000]={0};
	scanf("%lld",&n);
	flag=0;
	min=100040;
	for(i=0;i<9;i++)
	{
		scanf("%lld",&a[i]);
		if (a[i]<=min)
		{
			min=a[i];
			digit=i+1;
		}
	}
	i=0;
	while (n>min)
	{
		arr[i]=digit;
		i++;
		n=n-min;
		flag=1;
	}
	if (n==min)
	{
		arr[i]=digit;
		i++;
		n=n-min;
		flag=1;
	}
	for (j=0;j<9;j++)
		if (n+min==a[j])
			arr[0]=j+1;

	if (flag==1)
	{
		for (j=0;j<i;j++)
		{
			printf("%d",arr[j]);
			arr[j]=0;
		}
		printf("\n");
	}
	else
		printf("-1\n");
	return 0;
}
