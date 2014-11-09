#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	char chess[8][8];
	char c;
	int j,i;
	while(t>0)
	{
		int flag=1;
		for (i=0;i<8;i++)
			for(j=0;j<8;j++)
			{
				scanf("%c",&c);
				if (c!='\n')
					chess[i][j]=c;
				else
					j--;
			}
		for (i=0;i<8;i++)
		{
			for(j=1;j<8;j++)
			{
				if (chess[i][j-1]!=chess[i][j])
					flag=1;
				else
				{
					flag=0;
					break;
				}

			}
			if (flag==0)
				break;
		}
		if (flag==0)
			printf("NO\n");
		else
			printf("YES\n");
		t--;
	}
	return 0;
}
