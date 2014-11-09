#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x1,x2,y1,y2,d1,d2,d;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
		d1=(x1-x2)*(x1-x2);
		d2=(y1-y2)*(y1-y2);
		d=d1+d2;
		printf("%.1f\n",sqrt(d));
		n--;
	}
	return 0;
}
