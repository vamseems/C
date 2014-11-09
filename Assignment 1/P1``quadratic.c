#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,r1,r2,r;
	int n;
	scanf("%d",&n);
	while (n!=0)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		if ((b*b)-(4*a*c)>=0)
		{
			r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
			r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
			if (r1<r2)
				printf("%.2lf %.2lf\n",r1,r2);
			else
				printf("%.2lf %.2lf\n",r2,r1);
		}
		else
		{
			r=(sqrt(((4*a*c-(b*b)))))/(2*a);
			r1=(-b)/(2*a);
			printf("%.2lf - i%.2lf,%.2lf + i%.2lf\n",r1,r,r1,r);
		}
		n--;
	}
	return 0;
}
