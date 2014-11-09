#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	char word[13];
	struct node *next;
}node;

int compare(const void *a,const void *b)
{
		return strcmp(*((char **)a),*((char **)b));
}
int main()
{
	int n,i,q,opt,flag;
	char s[13];
	scanf ("%d",&n);
	node *head;
	head=(node *)malloc(sizeof(node )*n);
	head->next=NULL;
	node *tail,*tmp,*ins;
	char **t;
	t=(char **)malloc(sizeof(char *)*n);
	for (i=0;i<n;i++)
	{
		t[i]=(char *)malloc(sizeof(char)*13);
		scanf("%s",(t[i]));	
	}
	tail=head;
	qsort(t,n,sizeof(char *),compare);
	for (i=0;i<n;i++)
	{
				tail->next=(node*)malloc(sizeof(node));
				tail=tail->next;
				strcpy(tail->word,t[i]);
	}
	tail->next=NULL;
	tail=head->next;
	free(t);
	scanf("%d",&q);
	char ch;
	while (q>0)
	{
		scanf("%d",&opt);
		switch (opt)
		{
			case 1:
					tail=head->next;
					ins=(node *)malloc(sizeof(node));
					ins->next=NULL;
					scanf("%s",(ins->word));
					tmp=head;
					while (1)
					{	
						if (strcmp(ins->word,tail->word)<=0)
							break;
						if(tail->next!=NULL)
						{
							tmp=tail;
							tail=tail->next;
						}
						else
						{
							tmp=tail;
							break;
						}
					}
					tmp->next=ins;
					ins->next=tail;
					if (tmp==tail && tail!=head->next)
						ins->next=NULL;
					//n++;
					break;					
			case 2:
					scanf("%s",s);
					flag=0;
					tail=head->next;
					tmp=head;
					while (1)
					{
						if (tail==NULL)
						{
							break;
						}
						if (!(strcmp(tail->word,s)))
						{
							flag=1;
							break;
						}
						tmp=tail;
						tail=tail->next;
					}
					if (tail!=NULL && flag==1)
					{
							tmp->next=tail->next;
							tail->next=NULL;
							//n--;
					}
					break;
			case 3:
					scanf(" %c",&ch);
					tail=head->next;
					/*while(tail->word[0]!=ch )
					{
						if (tail->next==NULL)
							break;
						tail=tail->next;
					}
					if (tail->word[0]!=ch)
					{
						printf("\n");
					}
					else
					{*/
						/*flag=0;
						while(1)
						{
							while(tail->word[0]==ch)
							{
								printf("%s\n", tail->word);
								if (tail->next==NULL)
									break;
									flag=1;					
								tail=tail->next;
							}
							if (flag==1)
								break;
							if (tail->next==NULL)
								break;
							tail=tail->next;
						}
						if (flag==0)
						{
							printf("\n");
						}
						*/flag=0;
						while(1)
						{
							if(tail->word[0]==ch)
							{	
								printf("%s\n",tail->word);
								flag=1;
							}
							if (tail->next==NULL)
								break;
							tail=tail->next;
						}
						if(flag==0)
							printf("\n");
						
					break;
		}
		q--;
	}
	return 0;
}