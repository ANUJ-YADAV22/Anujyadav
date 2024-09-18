/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
Struct node
{
	int data;
	Struct node*next;
};
Struct node*head,*newnode,*temp;
int main()
{
	int choice, head=0;
	while(1)

	{
		printf("\n operations performed by linked list");
		printf("\n 1.creation \n 2.show \n 3.end");
		printf("\n \n Enter the choice:");
		scanf("%d",&choice);

		switch(choice)
		{
		case 1:
			//Creation code

			newnode=(struct node*)malloc(size of(struct node))

			        printf("Enter the data");
			scanf("%d",&x);
			newnode->next=0;
			newnode->data=x;
			
			if(head==0)
			{
			    head=temp=newnode;
			}
			else
			{
			    temp->next=newnode;
			    temp=newnode;
			}
			
			

		}
	}

