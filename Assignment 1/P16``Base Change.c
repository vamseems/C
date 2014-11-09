#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,i,a,y,c,x,b,s;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%d%d",&a,&b);
		y=1;
		x=31;
		c=0;
		while (x>0)
		{
			r=a&y;
			y=y<<1;
			if (r>=1)
				c++;
			x--;
		}
		c=c-1;
		s=1;
		while (c>0)
		{
			i=pow(b,c);
			s=s+i;
			c--;
		}
		printf("%d\n",s);
		n--;
	}
	return 0;
}

