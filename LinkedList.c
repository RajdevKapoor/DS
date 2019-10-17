#include <stdio.h>
#include <stdlib.h>

struct node{

    int info;
    struct node *link;

};

struct node *START=NULL;

struct node* createNode(){
    struct node *n=(struct node*)malloc(sizeof(struct node));
return(n);
};

void insertNode(){
    struct node *temp, *t;
    temp=createNode();
    printf("Number: ");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START=NULL){
        START=temp;
    }
    else{
        t=START;
        while(t->link!=NULL){
            t=t->link;
            t->link=temp;
        }
    }
}

void deleteNode(){
    struct node *r;
    if(START=NULL){
        printf("List empty");
    }
    else{
        r=START;
        START=START->link;
        free(r);
    }
}


void viewList(){
    if(START=NULL){
        printf("list empty");
    }
    else{
        struct node * t=START;
        while(t!=NULL){
            printf("%d",t->info);
            t=t->link;
        }
    }
}
int menu(){
    int ch;
    printf("1: add val\n");
    printf("2: del val\n");
    printf("3: print val\n");
    printf("4: exit val\n");
    printf("input:    \n");
    scanf("%d",&ch);
    return(ch);
}

int main()
{
    while(1){

        switch(menu()){
        case 1:insertNode();
                break;
        case 2:deleteNode();
                break;
        case 3:viewList();
                break;
        case 4:exit(0);
        default:printf("invalid input");

        }
    }
}
