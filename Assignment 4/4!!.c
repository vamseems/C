#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		unsigned int n,p,tmp,tmp2;
		scanf("%u%u",&n,&p);
		tmp=n<<p;
		tmp2=n>>(32-p);
		tmp=tmp | tmp2;
		printf("%u\n",tmp);
		t--;
	}
	return 0;
}
