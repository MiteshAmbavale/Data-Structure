#include<stdio.h>
#include<stdlib.h>
//Inserting elemnts in the list.

struct node  // defining structure for a node
{
	int data;
	struct node* next;
};

struct node* head = NULL ; // Defining head as a global variable.

int inserting_element(int *p)
{
	struct node* temp;
	struct node* temp1;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = *p;
	temp->next = NULL;
		
	if (head == NULL)
	{
		head = temp;
		temp->next = NULL;
		printf("%d \n",temp->data);
	}
	
	else
	{
		temp1 = head;
		while (temp1->next != NULL)
		{
			temp1= temp1->next;			
		}
		temp1->next=temp;   
	}


	
}

void print()
{
	struct node* temp = head;
	while (temp != NULL)
	{
		printf("%d \n",temp->next);
		temp = temp->next;
		
	}
	printf("\n");
}

int main()
{
	int f,i,a;
	printf("Enter the number of elements you want to save in the list  \n");
	scanf("%d",&f);
	for(i =1; i<=f ; i++)
	{
		printf("Enter the number \n");
		scanf("%d",&a);
		inserting_element(&a);
		print();
	}
	
}

