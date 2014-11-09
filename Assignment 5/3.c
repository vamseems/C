#include<stdio.h>
#include<stdlib.h>
int n;

typedef struct node 
{
	struct node *prev;
	int key;
	int rank;
	struct node *next;
} node ;

long long int expo(long long int a, long long int b)
{
	long long int x=1,y=a;
	while(b > 0)
	{
		if(b%2 == 1)
		{
			x=(x*y)%1000000007;
		}
		y = (y*y)%1000000007; 
		b /= 2;
	}
	return x;
}



void beauty (node *a, node *b)
{
	int i;
	long long int out=0;
	node *tm1,*tm2;
	tm1=a;
	tm2=b;
	for (i=0;i<n;i++)
	{
		//printf("\t\t%lld\t%lld\n",(long long int)pow((tm1->key),(tm2->rank))%1000000007,(long long int)pow((tm2->key),(tm1->rank))%1000000007);
		out=(out+((long long int)expo((long long int)(tm1->key),(tm2->rank))+(long long int)expo((long long int)(tm2->key),(tm1->rank))))%1000000007;
		tm1=tm1->next;
		tm2=tm2->next;
	}
	printf("%lld\n",out);

}
void deleteh (node **a, node **b)
{
	node *t,*tmp;
	t=*a;
	tmp=(*a)->prev;
	(*a)=(*a)->next;
	(*a)->prev=tmp;
	tmp->next=(*a);
	t->next=NULL;
	t->prev=NULL;
	t=*b;
	tmp=(*b)->prev;
	(*b)=(*b)->next;
	(*b)->prev=tmp;
	tmp->next=(*b);
	t->next=NULL;
	t->prev=NULL;
	printf("done\n");
	n--;
}

void deletet (node **t1, node **t2)
{
	node *tmp,*tmp2;
	tmp=*t1;
	(*t1)=(*t1)->prev;
	tmp->prev=NULL;
	tmp2=tmp->next;
	tmp2->prev=(*t1);
	(*t1)->next=tmp2;
	tmp->next=NULL;
	tmp=*t2;
	(*t2)=(*t2)->prev;
	tmp->prev=NULL;
	tmp2=tmp->next;
	tmp2->prev=(*t2);
	(*t2)->next=tmp2;
	tmp->next=NULL;
	printf("done\n");
	n--;
}

void rotate (node **a, node **b,node **t1,node **t2)
{
	long long int an,bn;
	scanf("%lld%lld",&an,&bn);
	an=an%n;
	bn=bn%n;
	if (an > (n-an))
	{
		int temp;
		temp=n-an;
		while (temp>0)
		{       
			*a=(*a)->prev;
			*t1=(*t1)->prev;
			temp--;
		}
	}
	else 
	{
		while (an>0)
		{       
			*a=(*a)->next;  
			*t1=(*t1)->next;
			an--;
		}
	}
	if (bn > (n-bn))
	{
		int temp;
		temp=n-bn;
		while (temp>0)
		{
			*b=(*b)->next;
			*t2=(*t2)->next;
			temp--;
		}
	}
	else
	{
		while (bn>0)
		{
			*b=(*b)->prev;
			*t2=(*t2)->prev;
			bn--;
		}
	}
	beauty(*a,*b);
}

int main()
{
	int m,i,j;
	node *a,*b,*t1,*t2,*tmp;
	scanf("%d%d",&n,&m);
	a=(node *)malloc(sizeof(node));
	a->next=NULL;
	a->prev=NULL;
	t1=a;
	b=(node *)malloc(sizeof(node));
	b->next=NULL;
	b->prev=NULL;
	t2=b;
	for (i=0;i<n-1;i++)
	{
		tmp=t1;
		scanf("%d",&(t1->key));
		t1->next=(node *)malloc(sizeof(node));
		t1=t1->next;
		t1->prev=tmp;
		t1->next=NULL;
		tmp=t2;
		t2->next=(node *)malloc(sizeof(node));
		t2=t2->next;
		t2->prev=tmp;
		t2->next=NULL;
	}
	scanf("%d",&(t1->key));
	t2->next=b;
	t1->next=a;
	tmp=b;
	for (i=0;i<n;i++)
	{
		scanf("%d",&(tmp->key));
		tmp=tmp->next;
	}
	tmp=a;
	for (i=0;i<n;i++)
	{       
		scanf("%d",&(tmp->rank));
		tmp=tmp->next;
	}       
	tmp=b;
	for (i=0;i<n;i++)
	{       
		scanf("%d",&(tmp->rank));
		tmp=tmp->next;
	}
	a->prev=t1;
	b->prev=t2;
	//printf("%d\n",t1->next->prev->prev->rank);
	int choice;
	char ht[4];
	while (m>0)
	{
		scanf("%d",&choice);
		if (choice==1)
		{
			scanf("%s",ht);
			if (ht[0]=='h')
				deleteh(&a,&b);
			else if (ht[0]=='t')
				deletet(&t1,&t2);
		}
		else if (choice==2)
		{
			rotate(&a,&b,&t1,&t2);
		}
		m--;
	}
	return 0;
}
