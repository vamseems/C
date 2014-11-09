#include<stdio.h>
int main()
{
	int m1,m2,n1,j,i,n2,k;
	scanf("%d%d",&m1,&n1);
	scanf("%d%d",&m2,&n2);
	if (n1!=m2)
		printf("Multiplication not possible\n");
	else
	{
		int mat1[m1][n1], mat2[m2][n2];
		for (i=0;i<m1;i++)
		{
			for (j=0;j<n1;j++)
				scanf("%d",&mat1[i][j]);
		}
		for (i=0;i<m2;i++)
		{
			for (j=0;j<n2;j++)
				scanf("%d",&mat2[i][j]);
		}
		int ans[m1][n2];
		for (i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
				ans[i][j]=0;
		}
		for (i=0;i<m1;i++)
		{
			for (j=0;j<n2;j++)
			{
				for (k=0;k<n1;k++)
					ans[i][j]=ans[i][j]+mat1[i][k]*mat2[k][j];
			}
		}
		for(i=0;i<m1;i++)
		{
			for (j=0;j<n2;j++)
				printf("%d ",ans[i][j]);
			printf("\n");
		}
	}
	return 0;
}

