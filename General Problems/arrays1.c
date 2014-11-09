#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],sum=0;
	float avg;
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
		sum=sum+a[i];
	avg=(float)sum/n;
	printf("Sum:%d\nAverage:%.1f",sum,avg);
	return 0;
}
