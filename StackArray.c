#include <stdio.h>
#include <stdlib.h>
#include <String.h>
int stack[100];
int max=0;
int top=-1;
void push(char item)
{
    if(top >=max-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}
char pop()
{
	char item ;

	if(top <0)
	{
		printf("stack under flow: invalid infix expression");
		exit(1);
	}
	else
	{
		item = stack[top];
		top = top-1;
		return(item);
	}
}
int main()
{

}
