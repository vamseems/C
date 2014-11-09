#include<stdio.h>
int main()
{
	int n;
	float a,b,i,i1,i2,i3,i4,i5,r1,r2,r3,r4,r5,v;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%f%f%f%f%f%f",&r1,&r2,&r3,&r4,&r5,&v);
		a=(r1*r2)/(r1+r2);
		b=1/((1/r3)+(1/r4)+(1/r5));
		i=v/(a+b);
		i1=i*(r2/(r1+r2));
		i2=i*(r1/(r1+r2));
		i3=i*((r4*r5)/((r4*r5)+(r3*r5)+(r3*r4)));
		i4=i*((r3*r5)/((r4*r5)+(r3*r5)+(r3*r4)));
		i5=i*((r4*r3)/((r4*r5)+(r3*r5)+(r3*r4)));
		printf("%.1f %.1f %.1f %.1f %.1f\n",i1,i2,i3,i4,i5);
		n--;		
	}
	return 0;
}


