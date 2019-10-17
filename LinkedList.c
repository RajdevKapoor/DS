#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *push(struct node* top)
{
    struct node *newnode;
    int info;
    scanf("%d",&info);
    while(info!=-1)
    {
        newnode=(struct node *)malloc(sizeof(struct node *));
        newnode->data=info;
        if(top==NULL)
        {
            top=newnode;
            printf("enter -1 to end\n");
            scanf("%d",&info);
        }
        else
        {
            newnode->data=info;
            newnode->next=top;
            top=newnode;
            printf("enter -1 to end\n");
            scanf("%d",&info);
        }
    }
    return top;
}
void display(struct node *top)
{
    struct node *ptr;
    ptr=top;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void pop(struct node *top)
{
    struct node *ptr;
    ptr=top;
    top=top->next;
    free(ptr);
}
int main()
{
    struct node *top=NULL;
    top=push(top);
    pop(top);
    display(top);
    return 0;
}


