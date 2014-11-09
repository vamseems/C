#include<stdio.h>
#include<stdlib.h>
int n;
int safe (int **p,int row, int col)
{
	int i,j;
	for (i=0;i<row;i++)
		if (p[i][col]==1)
			return 0;
	for (i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
		if (p[i][j]==1)
			return 0;
	for (i=row-1,j=col+1;i>=0 && j<n;i--,j++)
		if (p[i][j]==1)
			return 0;
	return 1;
}

int check (int **p, int row)
{
	if (row>=n)
		return 1;
	int out;
	int i,j;
	for (j=0;j<n;j++)
	{
		out=safe(p,row,j);
		printf("\t\tout=%d\trow=%d\tcol=%d\n",out,row,j);
		if (out==1)
		{
			p[row][j]=1;
			out=check (p,row+1);
			printf("\tout=%d\trow=%d\tcol=%d\n",out,row,j);
			if (out==0)
			{
				p[row][j]=0;
			}
			else
				return 1;
		}
	}
	return 0;
}

int main()
{
	int i,j,out;
	scanf("%d",&n);
	int p[50][50]={0};
	out=check(p,0);
	if (out==0)
		printf("Not possible");
	else
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				printf("%d ",p[i][j]);
			printf("\n");
		}
	}
	return 0;
}
