#include <stdio.h>
#include <stdlib.h>
int max=100;
int queue[max];
int front=-1;
int rear=-1;

void push()
{
    if(rear==max-1)
    {
        printf("overflow condition\n");
    }
    else if(rear==-1&&front==-1)
    {
        front=front+1;
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
    else
    {
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
}
void pop()
{
    if(front==-1||front>rear)
    {
        printf("Underflow condition");
    }
    else if(front==rear)
    {
        printf("element deleted %d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("element deleted %d\n",queue[front]);
        front=front+1;
    }
}
void display()
{
    int i=0;
    while(i<n)
    {
        printf(queue[i]);
    }
}
int main()
{
    printf("enter the number of values you want to enter and the number of deletions required");
    scanf("%d%d",&m, &n);
    while(m>0)
    {
        push();
        m=m-1;
    }
    while(n>0)
    {
        push();
        n=n-1;
    }
    return 0;
}
