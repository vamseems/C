#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int id;
	int *p;
	struct node *next;
} node;

void check(node *head)
{
	
}

int main()
{
	int n,i,m,q;
	scanf("%d%d%d",&n,&m,&q);
	node *head,*tail;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	tail=head;
	for (i=1;i<=n;i++)
	{
		tail->next=(node *)malloc(sizeof(node));
		tail->p=(int *)calloc(n,sizeof(int));
		tail->next=NULL;
		tail->id=i;
	}
	int p1,p2;
	for (i=0;i<m;i++)
	{
		tail=head->next;
		scanf("%d%d",&p1,&p2);
		while (p1!=tail->id)
			tail=tail->next;
		tail->p[p2-1]=1;
	}
	check(head);
	tail=head->next;
	for (i=0;i<q;i++)
	{
		scanf("%d%d",&p1,&p2);
		while (p1!==tail->id)
			tail=tail->next;
		tail->p[p2-1]=0;
		check(head);
	}
	return 0;
}