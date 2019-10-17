#include<stdio.h>
#include<conio.h>
typedef struct node
{
  int data;
  struct node *left;
  struct node *right;
} node;

node *create()
{
    node *p;
    int x;
    printf("Enter data(-1 to stop):");
    scanf("%d",&x);

    if(x==-1)
	return NULL;

    p=(node*)malloc(sizeof(node));
    p->data=x;
    printf("Enter left child of %d:\n",x);
    p->left=create();
    printf("Enter right child of %d:\n",x);
    p->right=create();
    return p;
}

void preorder(node *t)
{
  if(t!=NULL)
  {
    printf("  %d",t->data);
    preorder(t->left);
    preorder(t->right);
  }
}
void inorder(node *t)
{
  if(t!=NULL)
  {
    inorder(t->left);
    printf("  %d",t->data);
    inorder(t->right);
  }
}
void postorder(node *t)
{
  if(t!=NULL)
  {
    postorder(t->left);
    postorder(t->right);
    printf("  %d",t->data);
  }
}
/*void search(int n,node*t){
    int flag=0;
if(t!=NULL)
  {
    if(preorder(t->left)==n){
        flag = 1;
    }
    else if(preorder(t->right)==n){
        flag = 1;
    }

    return flag;
  }
}*/
void main()
{
  int n;
  node *root;
  root=create();
  printf("\n preorder: ");
  preorder(root);
  printf("\ninorder: ");
  inorder(root);
  printf("\npostorder: ");
  postorder(root);
  printf("Search Number: ");
  scanf("%d",&n);
  k=search(n,root);
  if(k==1){
    printf("present");
  }
  else{
    printf("notpresent");
  }
  getch();
}
