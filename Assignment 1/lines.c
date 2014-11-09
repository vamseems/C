#include<stdio.h>
#include<math.h>
int main()
{
	double m1,m2,x1,x2,x3,x4,y1,y2,y3,y4,d1,d2,d3,d4,a1,a2,a3,a4,a5,a6;
	int n;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		m1=(y2-y1)/(x2-x1);
		m2=(y4-y3)/(x4-x3);
		d1=(y3-y1)-(m1)*(x3-x1);
		d2=(y4-y1)-(m1)*(x4-x1);
		d3=(y1-y3)-(m2)*(x1-x3);
		d4=(y2-y3)-(m2)*(x2-x3);
		a1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
		a2=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
		a3=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
		a4=sqrt(pow((x1-x4),2)+pow((y1-y4),2));
		a5=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
		a6=sqrt(pow((x4-x2),2)+pow((y4-y2),2));
		if (d1*d2<0 && d4*d3<0)
			printf("YES");
		if (m1==m2)
		{
			if (a1+a3+a2==a4 || a1+a3+a5==a6 || a1+a3+a4==a2 || a1+a3+a6==a5)
				printf("NO");
			else 
				printf("YES");
		}
		n--;
	}
	return 0;
}
