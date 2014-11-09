#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d%d",&a,&b);
		if (a==0 || b==0)
			printf("YES\n");
		else if (a%b==0 || b%a==0)
			printf("YES\n");
		else
			printf("NO\n");
		n--;
	}
	return 0;
}
