#include<stdio.h>
#include<stdlib.h>
struct node
{
	int d;
	struct node *next;
};
typedef struct node node;
void delete (node *head, int del )
{
	while (head->next->d!=del)
		head=head->next;
	head->next=head->next->next;
}

int main()
{
	int i,max=0,del;
	node *head=NULL,*t;
	head=(node *)malloc(sizeof(node));
	t=head;
	for (i=0;i<10;i++)
	{
		scanf("%d",&t->d);
		t->next=NULL;
		t->next=(node *)malloc(sizeof(node));
		t=t->next;
	}
	scanf("%d",&del);
	t=head;
	delete (head, del);
	for (i=0;i<9;i++)
	{
		printf("%d ",t->d);
		t=t->next;
	}
	printf("\n");
	return 0;
}

