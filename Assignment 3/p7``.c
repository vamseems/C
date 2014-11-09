#include<stdio.h>
#include<string.h>
int main()
{       char a[10000],b[10000]; 
	int t;
	scanf("%d",&t);
	while (t>0)
	{
		int ref[10000]={0};
		int i,j,flag,la,lb,z,k;
		scanf("%s%s",a,b);
		lb=strlen(b);
		la=strlen(a);
		for (i=0;i<la;i++)
		{
			flag=1;
			z=i;
			for (j=0;j<lb;j++)
			{
				if (a[z]==b[j])
					z++;
				else
				{
					flag=0;
					break;
				}
			}
			if (flag==1)
			{
				for (k=i;k<i+lb;k++)
					ref[k]=-1;
			}
		}
		for (k=0;k<la;k++)
		{
			if(ref[k]!=-1)
				printf("%c",a[k]);
		}
		printf("\n");
		t--;
	}
	return 0;
}

