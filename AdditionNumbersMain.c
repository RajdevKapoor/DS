#include<stdio.h>
#include<malloc.h>

typedef struct NODE
{
	int digit;
	struct NODE *next;
} node;

node *convert(int num)
{
	node *start, *nn, *p;
	if(num==0)
	{
		return NULL;
	}
	start=(node*)malloc(sizeof(node));
	start->digit=num%10;
	start->next=NULL;
	num/=10;
	p=start;
	while(num!=0)
	{
		nn=(node*)malloc(sizeof(node));
		p->next=nn;
		nn->digit=num%10;
		nn->next=NULL;
		num/=10;
		p=nn;
	}
	return start;
}

node *add(node *n1, node *n2)
{
	if(n1==NULL && n2==NULL)
	{
		return NULL;
	}
	else if(n1==NULL)
	{
		return n2;
	}
	else if(n2==NULL)
	{
		return n1;
	}
	else
	{
		node *s1, *s2, *n3, *p, *nn;
		int carry=0;
		s1=n1;
		s2=n2;
		n3=(node*)malloc(sizeof(node));
		n3->digit=s1->digit+s2->digit;
		if(n3->digit>9)
		{
			n3->digit=n3->digit%10;
			carry=1;
		}
		n3->next=NULL;
		p=n3;
		s1=s1->next;
		s2=s2->next;
		while(s1!=NULL&&s2!=NULL)
		{
			nn=(node*)malloc(sizeof(node));
			p->next=nn;
			nn->digit=s1->digit+s2->digit+carry;
			if(nn->digit>9)
			{
				nn->digit=nn->digit%10;
				carry=1;
			}
			else
			{
				carry=0;
			}




			nn->next=NULL;
			p=nn;
			s1=s1->next;
			s2=s2->next;
		}
		if(s1!=NULL)
		{
			while(s1!=NULL)
			{
				nn=(node*)malloc(sizeof(node));
				p->next=nn;
				nn->digit=s1->digit+carry;
				if(nn->digit>9)
				{
					nn->digit=nn->digit%10;
					carry=1;
				}
				else
				{
					carry=0;
				}
				nn->next=NULL;
				p=nn;
				s1=s1->next;
			}
		}
		else if(s2!=NULL)
		{
			while(s2!=NULL)
			{
				nn=(node*)malloc(sizeof(node));
				p->next=nn;
				nn->digit=s2->digit+carry;
				if(nn->digit>9)
				{
					nn->digit=nn->digit%10;
					carry=1;
				}
				else
				{
					carry=0;
				}


				nn->next=NULL;
				p=nn;
				s2=s2->next;
			}

		}
		nn=(node*)malloc(sizeof(node));
		p->next=nn;
		nn->digit=carry;
		nn->next=NULL;
		return n3;
	}
}

void display(node *start)
{
	int pow=1, num=0;
	while(start!=NULL)
	{
		num+=start->digit*pow;
		start=start->next;
		pow*=10;
	}
	printf("%d ", num);
}

void main()
{
	int a;
	node *n1, *n2, *n3;
	printf("Enter First Number: ");
	scanf("%d", &a);
	n1=convert(a);
	printf("Enter Second Number: ");
	scanf("%d", &a);
	n2=convert(a);
	n3=add(n1, n2);
	display(n3);
}
