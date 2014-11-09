#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t>0)
	{
		char s1[10010],s2[10010];
		int l1,l2,i=0,j=1,flag=0,z=0;
		scanf("%s%s",s1,s2);
		l1=strlen(s1);
		l2=strlen(s2);
		if (l1!=l2)
			printf("NO\n");
		else
		{
			for (i=0;i<l1;i++)
			{
				if(s1[0]==s2[i])
				{
					flag=1;
				//	printf("\tj=0. %cz=%d. %c\n",s1[0],i,s2[i]);
					z=i+1;
					for (j=1;j<l1;j++)
					{
						if (z>=l1)
							z=z-l1;
				//		printf("\tj=%d. %cz=%d. %c\n",j,s1[j],z,s2[z]);
						if( s1[j]==s2[z])
						{
							flag=1;
							z++;
						}
						else
						{
							flag=0;
							break;
						}
				//		printf("\t\t\t\tflag=%d\n",flag);
					}
					if (j==l1)
						break;

				}
			}
			if (flag==1)
				printf("YES\n");
			else    
				printf("NO\n");

		}
		/*	if (flag==1)
			printf("YES\n");
			else
			printf("NO\n");
			*/	t--;
	}
	return 0;
}


