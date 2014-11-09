#include<stdio.h>
void hanoi(int s,int d, int i, int n)
{
	if (n==0)
		return;
	hanoi (s,i,d,n-1);
	printf("%d-->%d\n",s,d);
	hanoi(i,d,s,n-1);
}

int main()
{
	int s,d,i,n;
	scanf("%d%d%d%d",&s,&d,&i,&n);
	hanoi(s,d,i,n);
	return 0;
}
