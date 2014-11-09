#include<stdio.h>
int main()
{
	int n,l,b,max,min,lcm,r;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%d%d",&l,&b);
		max=l;
		min=b;
		while (b!=0)
		{
			r=l%b;
			l=b;
			b=r;
		}
		lcm=(max*min)/l;
		printf("%d\n",lcm);
		n--;
	}
	return 0;
}
