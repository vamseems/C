#include<stdio.h>
#include<math.h>
long int n,z;
int prime (long int a)
{
	long int b,j,r;
	if (a==3 || a==5 || a==7)
	{
//		printf("1\n");
		return 1;
	}
	else if (a%2==0)
	{
//		printf("0\n");
		return 0;
	}
	else
	{
		b=sqrt(a);
		for (j=3;j<=b;j=j+2)
		{
			r=a%j;
			if (r==0)
			{
//				printf("0\n");
				return 0;
			}
		}
//		printf("1\n");
		return 1;
	}

}

int check (long int i)
{

	if ((z-1)%(i-1)==0)
	{
//		printf("1\n");
		return 1;
	}
//	printf("0\n");
	return 0;
}

int main()
{
	long int b,r,i,ni=0;
	scanf("%ld",&n);
	z=n;
	if (n%2==0)
		printf("No\n");
	else
	{
		b=sqrt(n);
		for (i=3;i<b;i=i+2)
		{
			r=n%i;
			if (r==0)
			{
//				printf("%ld\n",i);
				ni++;
				break;
			}
		}
		if (prime(i))
		{
			while (n>1)
			{
				if (prime (i) && check(i))
				{

					n=n/i;
//					printf("%ld\n",n);
					for (i=3;i<n;i=i+2)
					{
						r=n%i;
						if (r==0)
						{
//							printf("%ld\n",i);
							ni++;
							break;
						}
					}
				}
				else
					break;
			}
		}
//		printf("%ld",ni);
		if (n==1 && ni>=2)
			printf("Yes\n");
		else 
			printf("No\n");
	}
	return 0;
}
