#include <stdio.h>
#include <stdlib.h>
int stack[10],size=10,top=-1;

void push(int);
int pop();

void push (int ele)
{
    if (top==size-1){
        printf("overflow");
        }
    else{
        stack[++top]=ele;
     }
}

void display()
{
    int i=0;
    if(top==-1)
    {
        printf("Stack is Empty .\n");
        return;
    }

    printf("%d <-- TOP ",stack[top]);
    for(i=top-1;i >=0;i--)
    {
        printf("\n%d",stack[i]);
    }
    printf("\n\n");
}


int pop()
{
    if(top==-1){
        printf("overflow");
        }
    else
        return stack[top--];
}

int main()

{
    int ITEM,choice;
    while(1)
    {

        printf("Enter Choice \n 1: display \n 2: insert \n 3: remove\n 4: Exit: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                display();
            break;
            case 2:
                printf("Enter Item to be insert :");
                scanf("%d",&ITEM);
                push(ITEM);
            break;
            case 3:
                pop();
            break;
            case 4:
                exit(0);
            default:
            printf("\nInvalid choice.");
            break;
        }
    }
}
