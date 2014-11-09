#include<stdio.h>
#include<math.h>
int main()
{
	int n,t;
	double p,r,a;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%lf%d%lf",&p,&t,&r);
		a=p/(pow((1+(r/1200)),(12*t)));
		printf("%.2lf\n",a);
		n--;
	}
	return 0;
}

