#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*top=NULL;
void push(int);
void pop();
void display();
int main()
{
	int ch;
	int value;
	while(1)
	{
		printf("\n stacks using linked list");
		printf("\n Menu");
		printf("\n 1.push \n 2.pop \n 3.display \n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			       printf("enter the value to be inserted");
		           scanf("%d",&value);
		           push(value);
				   break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
		    case 4:exit(0);
			default:printf("enter a void choice");
		}
	}
}
void push(int value)
{
	struct node*newnode;
	newnode =(struct node*)malloc(sizeof(struct node));
	newnode ->data=value;
	if(top==NULL)
	{
		newnode -> next=NULL;
	}
	else
	{
		newnode -> next=top;
	}
	top=newnode;
}
void pop()
{
	if(top==NULL)
	printf("stack overflow");
	else{
	    struct node*temp;
	    temp=top;
	    top=temp -> next;	
	    free(temp);
	}
}
void display()
{
	if(top==NULL)
	printf("stack is empty");
	else
	{
		struct node*temp=top;
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
	}
}
