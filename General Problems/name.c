#include<stdio.h>
int main()
{
	char name[100];
	int i=0;
	scanf("%[^\n]",name);
	while (name[i]!='\0')
	{
		if (name[i]!=' ')
			name[i]=(int)name[i]-32;
		i++;
	}
	printf("%s\n",name);
	return 0;
}
