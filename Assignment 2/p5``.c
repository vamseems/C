#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,b,c,i,j,sum,s1=0,s2=0;
	double s;
	while (scanf("%lld",&a)!=EOF)
	{
		int flag=1;
		s1=0;
		s2=0;
		c=0;
		if (a==0)
			printf("YES\n0\n");
		else
		{
			b=a;
			while (b>0)
			{
				c++;
				b=b/10;
			}
			i=0;
			long long int num[c];
			while (a>0)
			{
				num[i]=a%10;
				a=a/10;
				i++;
			}
			for (j=0;j<c/2;j++)
			{
				if (num[j]!=num[c-1-j])
				{
					printf("NO\n");
					flag=0;
					break;
				}
			}
			if (flag==1)
			{
				printf("YES\n");
				if (c%2!=0)
				{
					sum=0;
					for(i=0;i<c;i++)
						sum=sum+num[i];
					printf("%lld\n",sum);
				}
				else
				{
					c=c/2;
					for(i=0;i<c;i++)
						s1=s1+(pow(10,i)*num[i]);
			//		printf("%lld\n",s1);
					c=c*2;
					for(j=0;i<c;i++)
					{
						s2=s2+(pow(10,j)*num[i]);
						j++;
					}
			//		printf("%lld\n",s2);
					s=(double)s2/(s1);
					printf("%.2lf\n",s);
				}
			}
		}
	}
	return 0;
}
