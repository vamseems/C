#include<stdio.h>
int main()
{
	int n,b;
	double x,y,a;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%lf%d",&a,&b);
		y=a;
		while (b>0)
		{
			x=y*1.12;
			y=x-(a/10);
			b--;
		}
		printf("%lf\n",y);
		n--;
	}
	return 0;
}

