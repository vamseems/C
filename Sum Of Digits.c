#include<stdio.h>
int main()
{
	int r,a,q,d=1,s=0;
	scanf("%d",&a);
	while (q!=0)
	{
		d=d*10;
		q=a/d;
	}
	q=a;
	while (q!=0)
	{
		d=d/10;
		q=q/d;
		r=a%d;
		s=s+q;
		q=r;
	}
	printf("The sum is %d",s);
	return 0;
}


