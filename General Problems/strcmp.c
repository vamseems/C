#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int i,flag=1;
	scanf("%s%s",s1,s2);
	for (i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if (s1[i]!=s2[i])
		{
			flag=0;
			if ((int)s1[i]>(int)s2[i])
				printf("-1\n");
			else if ((int)s1[i]<(int)s2[i])
				printf("1\n");
			break;
		}
	}
	if (flag==1)
		printf("0\n");
	return 0;
}
