#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a,p;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%d",&a);
		if (a==1)
			printf("FALSE\n");
		else if (a==2 || a==3 ||  a==5 || a==7)
			printf("TRUE\n");
		else if (a%2==0)
			printf("FALSE\n");
		else if (a>=9)
		{
			p=sqrt(a);
			for (i=3;i<=p;i=i+2)
			{
				if (a%i==0)
				{
					printf("FALSE\n");
					break;
				}
			}
			if (i>sqrt(a))
				printf("TRUE\n");

		}
		n--;
	}
	return 0;
}


