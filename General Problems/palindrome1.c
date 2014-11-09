#include<stdio.h>
int main()
{
	char ch[100];
	int i=0,j;
	scanf("%s",ch);
	while (ch[i]!='\0')
		i++;
	for (j=0;j<i;j++)
	{
		if(ch[j]!=ch[i-1-j])
		{
			printf("No");
			break;
		}
	}
	if (j==i)
		printf("Yes");
	return 0;
}
