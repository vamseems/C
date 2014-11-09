#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	char a[1050];
	char b[1050];
	int la,lb,m,n,i,j,k;
	while (t>0)
	{
		scanf("%s%s",a,b);
		int z=0,max=0;
		la=strlen(a);
		lb=strlen(b);
		if (la<lb)
		{
			int t;
			char temp[2000]={'0'};
			t=lb;
			lb=la;
			la=t;
			strcpy(temp,b);
			strcpy(b,a);
			strcpy(a,temp);
		}
		for (i=0;i<la;i++)
			a[i]=a[i]-'0';
		for (i=0;i<la;i++)
			b[i]=b[i]-'0';
		int ans[1000000]={0};
		m=0;
		n=0;
		if ((int)a[0]<0)
			m=1;
		if ((int)b[0]<0)
			n=1;
		k=0;
		for (i=lb-1;i>=n;i++)
		{
			for (j=la-1;j>=m;j++)
			{
				ans[k]=ans[k]+(a[j]*b[i]);
				if (ans[k]>9)
				{
					ans[k]=ans[k]%10;
					ans[k+1]=ans[k+1]+ans[k]/10;
				}
				k++;
			}
		}
		if (ans[k]>0)
			k++;
		if ((int)a[0]<0 && (int)b[0]<0)
			printf("-");
		for (j=0;j<k;j++)
			printf("%d",ans[j]);
		printf("\n");
		t--;
	}
	return 0;
}

