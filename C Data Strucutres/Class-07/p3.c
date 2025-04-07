/* Design and implement a c program to validate balanced parentheses using stack*/

#include<stdio.h>
#define SIZE 100
char stack[SIZE];
int top=-1;
int i;
void push(char data)
{
	stack[++top]=data;
}
char pop()
{
	return stack[top--];
}
int isBalanced(char *exp)
{
	for(i=0;exp[i]!='\0';i++)
	{
		char ch=exp[i];
		if(ch=='('||ch=='['||ch=='{')
		{
			push(ch);
		}
		else if(ch==')'||ch==']'||ch=='}')
		{
			if(top==-1)
			{
				return 0;
			}
			char last=pop();
			if((ch==')'&&last!='(')||(ch==']'&&last!='[')||(ch=='}'&&last!='{'))
			{
				return 0;
			}
		}
	}
	return top==-1;
}
int main()
{
	char exp[SIZE];
	printf("Enter an expression:");
	scanf("%s",exp);
	if(isBalanced(exp))
	{
		printf("The expression is balanced");
	}
	else
	{
		printf("The expression is not balanced");
	}
	return 0;
}
