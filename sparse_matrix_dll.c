#include<stdio.h>
#include<stdlib.h>
struct node
{
    int row,col,data;
    struct node *next;
    struct node *prev;
};
typedef struct node *NODE;
NODE insertend(NODE start,int row, int col,int item)
{
    NODE temp,cur;
    temp=(NODE)malloc(sizeof(struct node));
    temp->row=row;
    temp->col=col;
    temp->data=item;
    temp->next =NULL;
    temp->prev=NULL;
    if (start==NULL)
        return temp;
    cur=start;
    while(cur->next!=NULL)
        cur =cur->next;
    cur->next=temp;
    temp->prev=cur;
    return start;
}
