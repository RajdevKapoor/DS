#include <stdio.h>
#include <stdlib.h>
struct node{
    int num;
    struct node *next;
};
struct node *head =NULL;

void display();
void create();
int survivor(int);

int main()
{
    int ali,skip,n,survive;
    printf("N: ");
    scanf("%d",&n);
    create(n);
    display();
    printf("\n");
    printf("Skip: \n");
    scanf("%d",&skip);
    printf("\n");
    survive=survivor(skip);
    printf("\n");
    printf("Srurvived : %d \n",survive);
    free(head);

    return 0;
}


void create(int n)
{
    struct node *temp,*rear;
    int a;
    for(int i=1;i<=n;i++)
    {
        printf("Enter Head");
        scanf("%d",&a);
        temp=(struct node *)malloc(sizeof(struct node));
        temp->num=a;
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            temp->next=head;
        }
        else
        {
            rear=head;
            while(rear->next!=head)
            {
                rear=rear->next;
            }
            rear->next=temp;
            temp->next=head;
        }


    }

}

void display()
{
    struct node *temp;
    temp=head;
    do
    {
        printf("%d ",temp->num);
        temp=temp->next;
    }
    while(temp!=head);
    printf("\n");
}

int survivor(int k)
{
    struct node *p,*q;

    p=head;
    q=head;
    while(p->next!=p)
    {
        for(int i=0;i<k-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        p->num=p->num--;
        if(p->num==0){
            free(p);}
        p=q->next;
    }
    head=p;
    return (p->num);
}
