#include<stdio.h>
#include<stdlib.h>
typedef struct st 
{
	int num;
	struct st *next;
}ST;
void addend(ST**);
void display(ST*);
void reverse_node(ST**);
void reverse_recursion(ST**);
void delete_particular_node(ST**,int);
void insert_node_middle(ST**,int);
void reverse_node_nth_pos(ST*,int);
void findmiddlenode(ST**);
void main()
{
	ST *hptr=0;
	int pos,nth;
	char ch;
	do{
		addend(&hptr);
		printf("Do you want to add one more node yes\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
	display(hptr);
	reverse_node(&hptr);
	printf("Display after reverse the node:\n");
	display(hptr);
	reverse_recursion(&hptr);
	printf("Display the node reverse recursion method:\n");
	display(hptr);
	printf("Enter the position insert node middle:\n");
	scanf("%d",&pos);
	insert_node_middle(&hptr,pos);
	printf("Display after node inserted:\n");
	display(hptr);
	printf("Enter the particular position to delete node:\n");
	scanf("%d",&pos);
	delete_particular_node(&hptr,pos);
	printf("Display the data after deletion:\n");
	display(hptr);
	printf("nth pos reverse from last:\n");
	scanf("%d",&nth);
	reverse_node_nth_pos(hptr,nth);
	findmiddlenode(&hptr);


}
void addend(ST **ptr)
{
	ST *temp;
	static ST *lastnode;
	temp=(ST*)malloc(sizeof(ST));
	printf("Enter the number:\n");
	scanf("%d",&temp->num);
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
		lastnode = *ptr;

	}
	else
	{
		temp->next=lastnode->next;
		lastnode->next=temp;
		lastnode=temp;

	}


}
void display(ST *ptr)
{

	while(ptr)
	{
		printf("data is:   %d\n",ptr->num);
		ptr=ptr->next;
	}

}
void reverse_node(ST **ptr)
{

	ST *s=0,*t;

	while(*ptr)
	{
		t=s;
		s=*ptr;
		*ptr=(*ptr)->next;
		s->next=t;
	}
	*ptr=s;


}
void reverse_recursion(ST **ptr)
{
	static ST *s=0,*t;

	if(*ptr)
	{
		t=s;
		s=*ptr;
		*ptr=(*ptr)->next;
		s->next=t;
		reverse_recursion(ptr);
	}
	else
		*ptr=s;

}
void delete_particular_node(ST **ptr,int pos)
{
	ST *p,*q;
	p=q=*ptr;
	int n,c;
	n=pos-1;
	c=1;
	if(pos==1)
	{
		free(q);
		q=NULL;
		return;	
	}

	while(c<n || c<pos )
	{
		if(c<n)
			p=p->next;
		q=q->next;
		c++;
	}
	p->next=q->next;
	free(q);
	q=NULL;



}
void insert_node_middle(ST **ptr,int pos)
{
	ST *middle,*p,*q;
	middle = (ST*)malloc(sizeof(ST));
	printf("Enter the node value:\n");
	scanf("%d",&middle->num);
	p=q=*ptr;
	int n,c=1;
	n=pos-1;
	while(c<n || c<pos)
	{
		if(c<n)
			p=p->next;
		q=q->next;
		c++;
	}
	p->next = middle;
	middle->next=q;


}
int count=1;
void reverse_node_nth_pos(ST *ptr,int nth)
{


	int i=1;
	ST *temp1,*temp2;
	temp1=ptr;
	while(ptr->next!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	count =count-nth;
	ptr=temp1;
	while(i<nth)
	{
		ptr=ptr->next;
		i++;

	}
	i=1;
	temp2=ptr;
	printf("%d\n",temp2->num);
	ptr=temp2;
	int j=1;
	while(j<=count)
	{
		for(i=1;i<=count;i++)
			ptr=ptr->next;
		printf("%d\n",ptr->num);
		count--;
		ptr=temp2;
	}



}

void findmiddlenode(ST **ptr)
{
    ST *slow,*fast;
    slow=fast=*ptr;
    while(slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    printf("Middle node Data:%d\n",slow->num);
}

--> Need to try this:-

struct Node {
  int data;
  struct Node *next;
};

struct Node *swap_node_pairs(struct Node *head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }

  struct Node *prev = head;
  struct Node *curr = head->next;

  while (curr != NULL && curr->next != NULL) {
    struct Node *next = curr->next;

    // Swap the next nodes of the two nodes.
    prev->next = next;
    curr->next = prev;

    // Move to the next pair of nodes.
    prev = curr;
    curr = next;
  }

  return head;
}
