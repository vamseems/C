#include<stdio.h>
int main()
{
	float x,y,x1,x2,x3,x4,y1,y2,y3,y4,k1,k2;
	int n;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if ((((y1-y2)*(x3-x1))+((x2-x1)*(y3-y1)))*(((y1-y2)*(x4-x1))+((x2-x1)*(y4-y1)))<0)
			printf("YES\n");
		else
			printf("NO\n");

	/*	if ((((x1-x2)*(y3-y4))-((y1-y2)*(x3-x4)))==0)
			printf("NO\n");
		x=((((x1*y2)-(y1*x2))*(x3-x4))-((((x1-x2)*(x3*y4))-(y3*x4))))/(((x1-x2)*(y3-y4))-((y1-y2)*(x3-x4)));
		y=((((x1*y2)-(y1*x2))*(y3-y4))-((((y1-y2)*(x3*y4))-(y3*x4))))/(((x1-x2)*(y3-y4))-((y1-y2)*(x3-x4)));
		k1=(x1-x)/(x-x2);
		k2=(x3-x)/(x-x4);
		if (k1>=0 && k2>=0)
			printf("YES\n");
		else if (((x1-x2)*(y3-y4))-((y1-y2)*(x3-x4))!=0)
			printf("NO\n");
		else if (k1<0 || k2<0)
			printf("NO\n");*/
		n--;
	}
	return 0;
}
