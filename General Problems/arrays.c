#include<stdio.h>
int main()
{
	int a[10],x,i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	scanf("%d",&x);
	for (i=0;i<10;i++)
	{
		if (a[i]==x)
		{
			printf("Yes, it is present in the array\n");
			break;
		}
	}
	if (i==10)
		printf("No, it is not present in the array\n");
	return 0;
}
