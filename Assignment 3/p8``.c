#include<stdio.h>
#include<string.h>
int main()
{
	int t,k=1;
	int i,j,l,lena,lenb;
	scanf("%d",&t);
	char a[10050];
	char b[1050];
	while (t>0)
	{
		scanf("%s%s",a,b);
		lena=strlen(a);
		lenb=strlen(b);
	//	printf("lenb=%d\n",lenb);
		for (i=0;i<lena;i++)
		{
			if (a[i]==b[0] || a[i]=='?')
			{
				k=1;
				for (j=i+1;j<(lenb+i);j++)
				{
					if(a[j]==b[k] || a[j]=='?')
					{
					//	printf("j=%d\t%c\tk=%d\t%c",j,a[j],k,b[k]);
						k++;
					}
					else
						break;
				
			//	printf("\t\t\t\t\t\tk=%d\n",k);
				}
				if (k==lenb)
				{
					int p=0;
					for (l=i;l<lenb+i;l++)
					{
						a[l]=b[p];
					//	printf("\t\t\t\tl=%d\t%c\n",l,a[l]);
						p++;
					}
				}
			}
		}
		for (i=0;i<lena;i++)
		{
			if (a[i]=='?')
				a[i]='*';
		}
		for (i=0;i<lena;i++)
			printf("%c",a[i]);
		printf("\n");
		t--;
	}
	return 0;
}				
