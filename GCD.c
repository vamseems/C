#include<stdio.h>
int main()
{
	int l,b,r;
	int n;
	scanf("%d",&n);
	while (n!=0)
	{
 		scanf("%d%d",&l,&b);
		if(l*b==0)
		{
			printf("0\n");
		}
		else
		{
		while (b!=0)
		{
			r=l%b;
			l=b;
			b=r;
		}
		printf("%d\n",l);
		}
		n--;
	}
	return 0;
}

