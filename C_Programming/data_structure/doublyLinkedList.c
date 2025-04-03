#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    struct st *prev; /* Self Refrential Structure Pointer*/
    int num;         /* Data Member*/
    struct st *next; /* Self Refrential Structure Pointer*/
}ST;
void addend(ST**);
void display(ST*);
void reversenode(ST**);
void findmiddlenode(ST*);
int main()
{
    char ch;
    ST *hptr=0;
    do
    {

    addend(&hptr);
    printf("do you want add one more node Yes:\n");
    scanf(" %c",&ch);

    }while(ch=='Y' || ch=='y');
    display(hptr);

    findmiddlenode(hptr);

    reversenode(&hptr);
    printf("Reverse Node:\n");
    display(hptr);




}

void addend(ST **ptr)
{
    ST *temp;
    static ST *lastnode;
    temp = (ST*)malloc(sizeof(ST));
    printf("Enter The Data:\n");
    scanf("%d",&temp->num);

    if(*ptr==0)
    {
        temp->next = temp->prev = *ptr;
        *ptr = temp;
        lastnode = *ptr;

    }
    else
    {
        temp->next = lastnode->next;
        lastnode->next = temp;
        temp->prev = lastnode;
        lastnode = temp;

    }


}

void display(ST *ptr)
{

    while(ptr)
    {
        printf("Data:%d\n",ptr->num);
        ptr= ptr->next;
    }


}

void findmiddlenode(ST *ptr)
{
    ST *slow,*fast;
    slow = fast = ptr;
    while(slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    printf("Moddile Node is:%d\n",slow->num);

}

void reversenode(ST **ptr)
{
    ST *s=0,*t;
    while(*ptr)
    {
        t=s;
        s=*ptr;
        *ptr = (*ptr)->next;
        s->next = t;
        s->prev = *ptr;
    }

    *ptr = s;


}


