#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *create(struct node *start)
{
    struct node *newnode, *ptr;
    int info;
    scanf("%d",&info);
    while(info!=-1)
    {
        newnode=(struct node *)malloc(sizeof(struct node *));
        newnode->data=info;
        if(start==NULL)
        {
            start=newnode;
            printf("enter -1 to end\n");
            scanf("%d",&info);
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=newnode;
            newnode->prev=ptr;
            newnode->next=NULL;
            printf("enter -1 to end\n");
            scanf("%d",&info);
        }
    }
    return start;
}
void display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void insert_beg(struct node *start)
{
    struct node *ptr, *newnode;
    int info;
    printf("enter the insertion value\n");
    scanf("%d",&info);
    newnode=(struct node *)malloc(sizeof(struct node *));
    newnode->data=info;
    newnode->next=start;
    start=newnode;
}
void insert_end(struct node *start)
{
    struct node *ptr, *newnode;
    int info;
    printf("enter the insertion value\n");
    scanf("%d",&info);
    newnode=(struct node *)malloc(sizeof(struct node *));
    newnode->data=info;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=newnode;
    newnode->prev=ptr;
    newnode->next=NULL;
}
void insert_at(struct node *start)
{
    struct node *ptr, *newnode, *pre;
    int info,val;
    printf("enter the insertion value\n");
    scanf("%d",&info);
    newnode=(struct node *)malloc(sizeof(struct node *));
    newnode->data=info;
    printf("enter value after which insertion has to be done\n");
    scanf("%d",&val);
    ptr=start;
    pre=ptr;
    while(pre->data!=val)
    {
        pre=ptr;
        ptr=ptr->next;
    }
    pre->next=newnode;
    newnode->prev=pre;
    newnode->next=ptr;
    ptr->next=newnode;
}
int main()
{
    struct node *start=NULL;
    start=create(start);
    insert_beg(start);
    display(start);
    /*insert_end(start);
    insert_end(start);
    display(start);*/
    return 0;
}
