#include<stdio.h>
#include<stdlib.h>
int horizontal (char **arr,int i, int j,int n)
{
	int c1;
	for (c1=0;(j+c1)<n && arr[i][j+c1]=='o';c1++);
	return c1;
}

int vertical (char **arr,int i,int j,int n)
{
	int c2;
	for (c2=0;(i+c2)<n && arr[i+c2][j]=='o';c2++);
	return c2;
}

int diagonalr(char **arr,int i,int j,int n)
{
	int c3=0,l,m;
	for(l=0,m=0;(i+l)<n && (j+m)<n && arr[i+l][j+m]=='o';l++,m++)
		c3++;
	return c3;
}
int diagonall(char **arr,int i,int j,int n)
{
	int c4=0,l,m;
	for(l=0,m=0;(i+l)<n && (j-m)>=0 && arr[i+l][j-m]=='o';l++,m++)
		c4++;
	return c4;
}

int main()
{
	int i,j;
	long long int t,c1,c2,c3,c4;
	scanf("%lld",&t);
	char c;
	while (t>0)
	{
		c1=0;
		c2=0;
		c3=0;
		c4=0;
		char **arr;
		int flag=0;
		int m,n;
		scanf("%d%d",&n,&m);
		arr=(char **)malloc(m*sizeof(char*));
		for (i=0;i<m;i++)
			arr[i]=(char *)malloc(n*sizeof(char));
		for (i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%c",&c);
				if (c!='\n')
				{
					arr[i][j]=c;
				}
				else
					j--;
			}
		}
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if (arr[i][j]=='o')
				{
					c1=horizontal(arr,i,j,n);
					c2=vertical(arr,i,j,n);
					c3=diagonalr(arr,i,j,n);
					c4=diagonall(arr,i,j,n);
				}
				if (c1>=5 || c2>=5 || c3>=5 || c4>=5)
				{
					flag=1;
					printf("found\n");
					break;
				}
			}
			if (flag==1)
				break;
		}
		if (flag!=1)
			printf("not found\n");
		free(arr);
		t--;
	}
	return 0;
}
