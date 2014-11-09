#include<stdio.h>
int main()
{
	int a,b,n,max,min;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%d%d",&a,&b);
		if (a>=b)
			min=a-b;
		else
			min=0;
		if (b%2==0)
			max=a-(b/2);
		else
			max=a-((b/2)+1);
		printf("%d %d\n",min,max);
		n--;
	}
	return 0;
}

