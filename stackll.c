#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*top;

push()
{
	int data;
	struct node *tmp;
	tmp=malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&data);
	tmp->data=data;
	tmp->next=top;
	top=tmp;
}

pop()
{
	struct node *tmp;
	tmp=malloc(sizeof(struct node));
	if(top==NULL)
	{
		printf("Stack Underflow");
		printf("\n");
		return 0;
	}
	tmp=top;
	printf("Element popped out is %d",top->data);
	top=tmp->next;
	free(tmp);
	printf("\n");
}

display()
{
	struct node *q;
	q=malloc(sizeof(struct node));
	if(top==NULL)
	{
		printf("List is empty");
		return;
	}
	q=top;
	printf("List is:\n");
	while(q!=NULL)
	{
		printf(" %d ", q->data);
		q=q->next;
	}
	printf("\n");
}

main()
{
	int choice;
	top=NULL;
	while(1)
	{
		printf("\n");
		printf("\tMENU\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Quit\n");
		printf("Your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid choice");
		}
	}
}
