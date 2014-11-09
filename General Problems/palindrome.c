#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],ch2[100];
	int i=0,j;
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		ch2[i]=ch[i];
	}
	ch2[i]=ch[i];
	j=i;
	strrev(ch);
	for (i=0;ch[i]!='\0';i++)
	{
		if (ch[i]!=ch2[i])
		{
			printf("No");
			break;
		}
	}
	if (i==j)
		printf("Yes");
	return 0;
}
