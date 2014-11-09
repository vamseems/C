#include<stdio.h>
int main()
{
	int t,z;
	scanf("%d",&t);
	char temp[400];
	char x;
	while (t>0)
	{
		int r,c,i=0,j,pad,count=0,n,k=0;
		getchar();
		while (1)
		{
			scanf("%c",&x);
			if (x==' ' || x=='\n')
				break;
			temp[i]=x;
			i++;
		}
		temp[i]='\0';
		scanf("%d%d%d",&r,&c,&pad);
		char a[r][c];
		int p,q;
		p=r;
		q=c;
		n=(r*c)-pad;
		int e=0;
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				a[i][j]=temp[e];
				e++;
			}
		}
		for (z=0;z<p;z++)
		{
			for (j=z;j<q;j++)
			{
				count++;
				printf("%c",a[z][j]);
				if (count==n)
					break;
			}
			if (count==n)
				break;
			for (i=z+1;i<p;i++)
			{
				count++;
				printf("%c",a[i][q-1]);
				if(count==n)
					break;
			}
			if (count==n)
				break;
			for (j=q-2;j>=z;j--)
			{
				count++;
				printf("%c",a[p-1][j]);
				if(count==n)
					break;
			}   
			if (count==n)
				break;
			for (i=p-2;i>z;i--)
			{   
				count++;
				printf("%c",a[i][z]);
				if(count==n)                       
					break;                           
			}                                    
			if (count==n)                         
				break;  
			p--;
			q--;
		}
		printf("\n");
		t--;
	}
	return 0;
}
