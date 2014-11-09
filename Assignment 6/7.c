#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int id;
	struct node *next;
} node;
int main()
{
	int t,n,count,*out,number,i,j;
	node *head,*tail,*curr;
	scanf("%d",&t);
	while (t>0)
	{
		//printf("test\n");
		count=0;
		number=1;
		scanf("%d",&n);
		head=(node *)malloc(sizeof(node));
		head->next=NULL;
		head->id=count;
		tail=head;
		count++;
		for (i=0;i<n-1;i++)
		{
		//	printf("%d\n",count);
			tail->next=(node *)malloc(sizeof(node));
			tail=tail->next;
			tail->id=count;
			tail->next=NULL;
			count++;
		}
		tail->next=head;
		//printf("\t\t\t%d\n",head->id);
		out=(int *)malloc(sizeof(int)*n);
		tail=head;
		curr=head;
		for (i=1;i<=n;i++)
		{
			if (i>1)
			{
				for (j=0;j<i;j++)
				{
					tail=tail->next;
					//printf("\t%d\n",tail->id);
				}
			}
			curr=tail->next;
			out[(curr->id)]=number;
			//printf("\tout[%d]=\t%d\n",curr->id,number);
			number++;
			tail->next=curr->next;
			curr->next=NULL;
			curr=tail;
		//	for (count=0;count<(n-number+1);count++)
		//	{
		//		printf("%d ",curr->id);
		//		curr=curr->next;
		//	}
		//	printf("\n");
		}
		for (i=0;i<n-1;i++)
			printf("%d ",out[i]);
		printf("%d\n",out[n-1]);
		t--;
	}
	return 0;
}
