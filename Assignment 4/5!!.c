#include<stdio.h>
#include<stdlib.h>
int n;
int check (int i, int j,int **p)
{
	if(i>=0 && i<n && j>=0 && j<n)
	{
		if (p[i][j]==1)
			return 1;
	}
	return 0;
}
int main()
{
	int i,j,out;
	scanf("%d",&n);

		int flag=0;
		int **p;
		p=(int **)malloc(sizeof(int *)*n);
		for (i=0;i<n;i++)
			p[i]=(int *)malloc(sizeof(int)*n);
		for (i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&p[i][j]);
		for (i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if (p[i][j]==1)
				{
					out=check(i-1,j+2,p);
					if (out==1)
					{
						flag=1;
						printf("YES\n");
						break;
					}
					out=check(i+1,j+2,p);
					if (out==1)
					{
						flag=1;
						printf("YES\n");
						break;
					}
					out=check(i+2,j-1,p);
					if (out==1)
					{
						flag=1;
						printf("YES\n");
						break;
					}
					out=check(i+2,j+1,p);
					if (out==1)
					{
						flag=1;
						printf("YES\n");
						break;
					}
					out=check(i+1,j-2,p);
					if (out==1)
					{
						flag=1;
						printf("YES\n");
						break;
					}
					out=check(i-1,j-2,p);
					if (out==1)
					{
						flag=1;
						printf("YES\n");
						break;
					}
					out=check(i-2,j+1,p);
					if (out==1)
					{
						flag=1;
						printf("YES\n");
						break;
					}
					out=check(i-2,j-1,p);
					if (out==1)
					{
						flag=1;
						printf("YES\n");
						break;
					}
				}
			}
			if (flag==1)
				break;
		}
		if (flag!=1)
			printf("NO\n");
		free(p);
	return 0;
}
